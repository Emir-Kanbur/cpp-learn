# cpp-learn

C++ öğrenirken hazırladığım Türkçe notlar ve bağımsız örnek programlar.

[![C++ Build Check](https://github.com/Emir-Kanbur/cpp-learn/actions/workflows/cpp-build.yml/badge.svg)](https://github.com/Emir-Kanbur/cpp-learn/actions/workflows/cpp-build.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](./LICENSE)

## İçindekiler

- [`cpp-udemy/`](./cpp-udemy/): Udemy derslerini takip ederken hazırlanan notlar ve alıştırmalar
- [`cpp-youtube/`](./cpp-youtube/): YouTube derslerini takip ederken hazırlanan örnekler
- [`YOBU/`](./YOBU/): Yozgat Bozok Üniversitesi Programlama-1 dersinden haftalık örnekler, ödevler ve ders notları

Örnekler birbirinden bağımsızdır; depoda tek bir uygulama veya ortak bir kütüphane yoktur. `YOBU/` içeriğinin kapsamı ve lisansı için [YOBU/README.md](./YOBU/README.md) ve [YOBU/LICENSE](./YOBU/LICENSE) dosyalarına bakın.

## Gereksinimler

- C++17 destekleyen bir derleyici (GCC veya Clang)
- Git (depoyu klonlamak için)

## Derleme ve çalıştırma

Depoyu klonlayıp bir örneği derleyin:

```bash
git clone https://github.com/Emir-Kanbur/cpp-learn.git
cd cpp-learn
mkdir -p build
g++ -std=c++17 cpp-udemy/1-start.cpp -o build/app
./build/app
```

`g++` yerine `clang++` kullanılabilir. Tüm örneklerin derlenebilirliği her push ve pull request'te GitHub Actions tarafından denetlenir.

## Kaynaklar ve lisans

Klasörler, çalışırken yararlandığım Udemy ve YouTube derslerine göre ayrılmıştır. YouTube çalışmalarında Sefa Ekinci ve Fehmi Uyar'ın derslerinden yararlandım. Bu depo söz konusu içerik üreticileriyle ilişkili veya onlar tarafından onaylanmış değildir.

MIT lisansı, bu depoda tarafımdan oluşturulan özgün notlar ve örnekler içindir. Atıf yapılan derslere veya varsa üçüncü taraf içeriklere ait telif ve lisans hakları ilgili hak sahiplerine aittir; bu içeriklerin lisansını ayrıca kontrol edin. Ayrıntılar için [LICENSE](./LICENSE) dosyasına bakın.

## Katkıda bulunma

Katkı önerileri ve yönergeler için [CONTRIBUTING.md](./CONTRIBUTING.md) dosyasına bakın.
