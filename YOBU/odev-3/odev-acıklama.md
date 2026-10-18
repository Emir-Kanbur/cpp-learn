## Programlama 1 Dersi Ödev 3

- Bir sınıfta en fazla 50 öğrencinin notları tutulacaktır.
- Kullanıcıdan öğrenci sayısı ve notlar alınacak, çeşitli analizler yapılacaktır.

## BÖLÜM-1 Girdi Alma (Değişken, Döngü, Dizi)

1-Kullanıcıdan öğrenci sayısı alınız.

- Öğrenci sayısı 1-50 aralığında değilse tekrar isteyiniz.

2-Öğrenci sayısı kadar notu tek bir diziye giriniz.

3-Notların 0-100 aralığında olmasına dikkat ediniz.
(Hatalı girişte notu tekrar isteyiniz.)

## BÖLÜM-2 Fonksiyonlar [TAMAMLANDI]

Aşağıdaki fonksiyonları ayrı ayrı tanımlayınız:

- float ortalamaHesapla (int notlar [], int n);
- int enYuksekNot (int notlar [] , int n);
- int enDusukNot (int notlar [] , int n);
- int gecenOgrenciSayisi (int notlar [] , int n);

Fonksiyon Açıklamaları

- ortalamaHesaplama => Notların ortalamasını döndürür.
- enYuksekNot => En yüksek notu bulur.
- enDusukNot => En düşük notu bulur.
- gecenOgrenciSayisi => Notu 60 ve üzeri olan öğrenci sayısını döndürür.
  Fonksiyon içinde mutlaka döngü kullanılmalıdır.

## BÖLÜM-3 Artırma / Azaltma Operatörleri

- Geçen öğrenci sayısını hesaplarken ++ operatörünü kullanınız.
- Not kontrolü sırasında gerekirse sayaç değişkenini oluşturunuz.

## BÖLÜM-4 Menü (Opsiyonel ama + Puan)

- Kullanıcıya aşağıdaki menüyü gösteriniz.

1- Notları listele
2- Ortalama Hesaplama
3- En Yüksek Not
4- En Düşük Not
5- Geçen Öğrenci Sayısı
0- Çıkış

    - Menü **while döngüsü** ile çalışmalıdır.
    - Kullanıcı 0 girene kadar program devam etmelidir.
    - Seçime göre ilgili fonksiyon çağırılmalıdır.

## BÖLÜM-5 Çıktı Formatı

Örnek Çıktı:

        Öğrenci Sayısı : 5
        Notlar : 45 78 90 60 30
        Ortalama : 60.6
        En Yüksek Not : 90
        En Düşük Not : 30
        Geçen Öğrenci Sayısı : 3

Kurallar

- Global değişken kullanılmayacaktır.
- Fonksiyonlar main dışına yazılacaktır.
- vector kullanılmayacaktır.
- Kod okunabilir ve yorum satırı içermelidir. 

Değerlendirme Kriterleri (100 Puan)
Dizi Kullanımı = 20 Puan
Döngülerin Doğru Kullanımı = 20 Puan
Fonksiyon Yapısı = 25 Puan
Artırma / Azaltma Kullanımı = 10 Puan
Menü ve Kullanıcı Etkileşimi = 15 Puan
Kod Düzeni ve Yorumlar = 10 Puan

## BONUS (+10 Puan)

- Ortalamanın üstünde olan öğrenci sayısını bulan ek bir fonksiyon yazınız.
