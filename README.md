# cpp-learn

C++ öğrenme sürecinde hazırlanan örnekler, notlar ve mini alıştırmalar.

[![C++ Build Check](https://github.com/Emir-Kanbur/cpp-learn/actions/workflows/cpp-build.yml/badge.svg)](https://github.com/Emir-Kanbur/cpp-learn/actions/workflows/cpp-build.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](./LICENSE)

## İçerik

- `cpp-udemy/`: Udemy üzerinden takip edilen ders notları ve pratikler
- `cpp-youtube/`: YouTube kaynaklı konu anlatımı ve örnek kodlar

## Hızlı Başlangıç

```bash
git clone https://github.com/Emir-Kanbur/cpp-learn.git
cd cpp-learn
```

Tek bir dosyayı derlemek için:

```bash
g++ -std=c++17 cpp-udemy/1-start.cpp -o app
./app
```

## Repo Düzeni ve Standart

- Her dosya bir konuya veya kısa bir alıştırmaya odaklanır.
- Örnekler bağımsız derlenebilir olacak şekilde tutulur.
- GitHub Actions, tüm `.cpp` dosyalarının derlenebilirliğini PR ve push sırasında kontrol eder.

## Katkı

Katkı adımları için [CONTRIBUTING.md](./CONTRIBUTING.md) dosyasına bakabilirsiniz.

## Lisans

Bu proje MIT lisansı ile sunulmaktadır. Ayrıntılar için [LICENSE](./LICENSE) dosyasına bakın.
