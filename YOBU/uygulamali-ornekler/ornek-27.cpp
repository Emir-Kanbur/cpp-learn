/* 
Bir kütüphanede kitaplar şu şekilde kategorize edilmiştir:
    Roman (Kod: R)
    Bilim Kurgu (Kod: B)
    Tarih (Kod: T)
    Felsefe (Kod: F)

Bir kullanıcının üye olduğu tarihe ve seçtiği kategoriye göre aşağıdaki indirimler uygulanır:
    Üyelik süresi 5 yıldan fazla olanlara %20
    Üyelik süresi 2-5 yıl arasında olanlara %10
    Üyelik süresi 2 yıldan az olanlara indirim uygulanmaz.

Ancak "Felsefe" kategorisindeki kitaplarda hiçbir indirim uygulanmamaktadır.
Kullanıcıdan üyelik süresi, kitap kategorisi ve kitap fiyatı bilgilerini alarak toplam ödemesi gereken miktarı hesaplayın.
*/

#include <iostream>
using namespace std;

int main () {

    char kategori;

    int uyeSuresi , uyeYili , gunumuzYili;

    double fiyat , sonFiyat;

    cout << "Üyelik tarihinizi giriniz: " ;
    cin >> uyeYili;

    cout << "Günümüz yılını giriniz: ";
    cin >> gunumuzYili;

    uyeSuresi = gunumuzYili - uyeYili;

    cout << "Kitap kategorisini seçiniz (R , B , T , F):  ";
    cin >> kategori;

    cout << "Kitap Fiyatı: " ;
    cin >> fiyat;

        if(kategori == 'F'){
            sonFiyat = fiyat;
        }
        else if (uyeSuresi > 5){
            sonFiyat = fiyat*0.80;
        }
        else if (uyeSuresi > 2 && uyeSuresi <=5) {
            sonFiyat = fiyat*0.90;
        }
        else {
            sonFiyat = fiyat;
        }

    cout << "Ödemeniz gereken tutar: " << sonFiyat << "TL" << endl;

    return 0;

}