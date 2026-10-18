## BELLEK KAVRAMLARI:

BEllekte değişkenler için ayrılan yer ve bu yerin yönetilmesi

Değişkenlerin bellekteki lokasyonları.

cin >> sayi1; Kullanıcının girdiği değeri bellekteki "sayi1" lokasyonuna yazdırır.

Değerlerin üzerine yazılması ve eski değerlerin kaybolması.

## Kullandığımız Komutlar ve Açıklamaları:

#include <iostream>
//Girdi/Çıktı işlemleri için gerekli kütüphaneyi ekliyoruz.
using namespace std;
//Standart isim uzayını kullanacağımızı belirtiyoruz.
int main() { // Ana fonksiyonumuz.

int sayi1, sayi2, toplam;
// İki tam sayı ve toplamını saklamak için değişkenleri tanımlıyoruz.

// Kullanıcıdan iki sayıyı girmesini istiyoruz.

    cout << "Lutfen birinci sayiyi giriniz: ";
    cin >> sayi1;

cout << "Lutfen ikinci sayiyi giriniz: ";
cin >> sayi2;
// Sayıları topluyoruz.
toplam = sayi1 + sayi2;
// Toplamı ekrana yazdırıyoruz.
cout << "Girilen iki sayinin toplami: " <<
toplam << endl;
return 0; // Program başarılı bir şekilde sona erdiğini belirtiyoruz.
