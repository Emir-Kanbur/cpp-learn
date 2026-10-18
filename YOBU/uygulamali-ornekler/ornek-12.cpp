/*
İKİ TAM SAYIYI TOPLAYAN PROGRAM:
- Değişkenin tanımlanması ve kullanıcıdan veri alınması 
- Temel matematiksel işlemler ve uygulama detayları 
*/

// Kullanıcıdan iki tam sayı al ve toplamlarını ekrana yazdır.

#include <iostream>
using namespace std;

int main () {

    int sayi1, sayi2, toplam;

    cout << "Birinci sayıyı giriniz: " ;
    cin >> sayi1;

    cout << "İkinci sayıyı giriniz: " ;
    cin >> sayi2;

    toplam = sayi1 + sayi2;

    cout << "Toplam: " << toplam << endl;

}