/*
Aşağıda bir e-ticaret sitesindeki ürünlerin fiyatları ve adetleri 
verilmiştir:
    Ürün 1: 50 TL, 6 adet
    Ürün 2: 100 TL, 4 adet
    Ürün 3: 150 TL, 2 adet
Eğer bir ürünün adeti 3'ten fazla ise %5, 5'ten fazla ise %10 indirim uygulanmaktadır. 
Bu bilgilere göre toplam alışveriş tutarını ve indirim miktarını hesaplayan kodu yazınız.
*/

#include <iostream>
using namespace std;

int main () {

    double urunFiyat1=50 ,urunAdet1=6, urunFiyat2=100 , urunAdet2=4 , urunFiyat3=150 , urunAdet3=2;
    double toplamTutar = 0;
    double indirimMiktar = 0;

    if (urunAdet1 >5)
    indirimMiktar += urunFiyat1*0.10*urunAdet1;
    else if (urunAdet1 > 3)
    indirimMiktar += urunFiyat1*0.05*urunAdet1;

    if (urunAdet2 > 5)
    indirimMiktar += urunFiyat2*0.10*urunAdet2;
    else if (urunAdet2 > 3)
    indirimMiktar += urunFiyat2*0.10*urunAdet2;
    
    if (urunAdet3 > 5)
    indirimMiktar += urunFiyat3*0.10*urunAdet3;
    else if (urunAdet3 > 3)
    indirimMiktar += urunFiyat3*0.10*urunAdet3;

    toplamTutar = (urunFiyat1*urunAdet1)+(urunFiyat2*urunAdet2)+(urunFiyat3*urunAdet3)-indirimMiktar;

        cout << "Toplam Alışveriş Tutarı: " << toplamTutar << endl;

        cout << "Toplam İndirim Tutarı: " << indirimMiktar << endl;

    return 0;
    
}