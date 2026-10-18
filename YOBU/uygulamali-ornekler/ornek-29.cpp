/*
Bir mağazada satılan ürünlerin fiyatlarına göre indirimler şu şekildedir:
    100 TL ve altı için indirim uygulanmaz.
    100 TL - 500 TL arası: %10 indirim
    500 TL - 1000 TL arası: %15 indirim
    1000 TL üzeri: %25 indirim
Bunun yanı sıra, mağaza şu anda özel bir kampanya düzenlemektedir. 
Eğer bir kişi 3 veya daha fazla ürün satın alırsa toplam fiyattan ekstra %5 indirim alır.
Kullanıcının satın almak istediği ürün sayısını ve toplam alışveriş fiyatını alarak ödemesi gereken miktarı hesaplayın.
*/

#include <iostream>
using namespace std;

int main () {

    int urunSayisi;
    double toplamFiyat , sonFiyat;

    cout << "Toplam ürün adedini giriniz: ";
    cin >> urunSayisi;

    cout << "Toplam alışveriş tutarını giriniz: ";
    cin >> toplamFiyat;

    if (toplamFiyat <=100) {
        sonFiyat=toplamFiyat;
    }
    else if (toplamFiyat <= 500) {
        sonFiyat = toplamFiyat*0.90;
    }
    else if (toplamFiyat <= 1000) {
        sonFiyat = toplamFiyat*0.85;
    }
    else if (toplamFiyat >= 1000) {
        sonFiyat = toplamFiyat*0.75;
    }

    if (urunSayisi >= 3) {
        sonFiyat*=0.95;
    }

    cout << "Ödemeniz gereken toplam tutar: " << sonFiyat << endl;

    return 0;
}