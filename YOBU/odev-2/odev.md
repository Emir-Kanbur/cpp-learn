    Yozgat Bozok Üniversitesi MMF Bilgisayar Mühendisliği
    Programlama 1 Dersi - Ödev 2
    Ödev Konusu: Fonksiyonlar ile Sıralama (Dizisiz)

Bu ödevde öğrencilerin fonksiyon tanımlama, fonksiyon çağırma, değer ve
referans parametre kullanımı ile temel sıralama mantığını anlamaları
amaçlanmaktadır. Bu ödevde dizi kesinlikle kullanılmayacaktır.

1. Görev – Üç Sayıdan En Küçük ve En Büyüğü
   Aşağıdaki iki fonksiyonu yazınız:
   int min3(int a, int b, int c); int max3(int a, int b, int c); Kullanıcıdan 3 tamsayı
   alarak en küçük ve en büyük sayıyı ekrana yazdırınız.

2. Görev – 3 Sayıyı Küçükten Büyüğe Sıralama
   Aşağıdaki imzaya sahip bir fonksiyon yazınız:
   void sort3(int &a;, int &b;, int &c;);
   Referans parametre kullanarak 3 sayıyı küçükten büyüğe sıralayınız. Bu
   fonksiyonun içinde dizi kullanmak yasaktır.

3. Görev – 4 Sayıyı Dolaylı Yoldan Sıralama
   Aşağıdaki fonksiyonu yazınız:
   int min4(int a, int b, int c, int d);
   Bu fonksiyonla önce en küçük sayıyı bulunuz. Daha sonra kalan üç sayı için
   min3 fonksiyonunu kullanarak 4 sayıyı küçükten büyüğe sıralı şekilde ekrana
   yazdırınız. Bu kısımda da dizi kullanmayınız.

4. Teorik Sorular
   Aşağıdaki soruları kısa cevaplarla açıklayınız:
   min3 fonksiyonunda neden karşılaştırma (if/else) yapılmak zorundadır? sort3
   fonksiyonunda referans (int &a;) kullanmanın avantajı nedir? Değer parametre
   (int a) kullansaydık ne olurdu? Bu yöntemle 3–4 sayı yerine 100 sayıyı
   sıralamak kolay olur muydu? Neden?

Değerlendirme (Toplam 100 Puan)
min3 ve max3 fonksiyonları (20 puan)
sort3 fonksiyonu ve referans kullanımı (30 puan)
min4 fonksiyonu ve 4 sayının doğru sıralanması (25 puan)
Kod düzeni, yorum satırları ve okunabilirlik (10 puan) Teorik soruların cevapları (15 puan)
