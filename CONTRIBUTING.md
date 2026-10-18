# Katkı Rehberi

Bu depo C++ öğrenme notları ve birbirinden bağımsız örneklerden oluşur. Katkı verirken örneklerin öğretici, sade ve C++17 ile derlenebilir olmasına dikkat edin.

## Katkı Adımları

1. Depoyu fork edin.
2. Yeni bir branch açın (`feat/yeni-konu` gibi).
3. Değişikliklerinizi yapın.
4. Değişen `.cpp` dosyalarını C++17 ile derleyin.
5. Değişikliklerinizi açıklayan bir pull request açın.

## İçerik Kuralları

- Dosyaları, takip ettikleri kaynak grubuna uygun klasöre ekleyin.
- Dosya adları konu odaklı ve anlaşılır olmalı; mevcut Türkçe adlandırma biçimini koruyun.
- Örnekler mümkün olduğunca tek kavrama odaklanmalı.
- Gereksiz bağımlılık eklenmemeli.
- Örnekler C++17 ile derlenebilir olmalı.
- Üçüncü taraf ders içeriklerini veya kodlarını izinsiz kopyalamayın; gerekiyorsa kaynak ve lisans bilgilerini belirtin.

Tek bir dosyayı doğrulamak için:

```bash
g++ -std=c++17 cpp-udemy/1-start.cpp -o /tmp/cpp-learn-example
```
