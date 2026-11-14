#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/.."
build_dir=$(mktemp -d)
trap 'rm -rf -- "$build_dir"' EXIT

git ls-files -z -- '*.cpp' > "$build_dir/sources"
count=0
while IFS= read -r -d '' source; do
  printf 'Derleniyor: %s\n' "$source"
  "${CXX:-c++}" -std=c++17 -Wall -Wextra -Wpedantic -Werror -c "./$source" -o "$build_dir/example.o"
  nm -P "$build_dir/example.o" > "$build_dir/symbols"
  if awk '$1 ~ /^_?main$/ && $2 == "T" { found = 1 } END { exit !found }' "$build_dir/symbols"; then
    "${CXX:-c++}" "$build_dir/example.o" -o "$build_dir/example"
  fi
  count=$((count + 1))
done < "$build_dir/sources"

if (( count == 0 )); then
  echo 'Git tarafından izlenen kaynak dosyası bulunamadı.' >&2
  exit 1
fi

printf '%d kaynak doğrulandı.\n' "$count"
