/*
Bir otobüs firması, bilet fiyatlarını şu şekilde belirlemiştir:
    0-6 yaş arası: Ücretsiz
    7-12 yaş arası: %50 indirimli
    13-24 yaş arası: %10 indirimli
    65 yaş ve üzeri: %30 indirimli
Ayrıca, yolcunun bir öğrenci kartı varsa ekstra %10 indirim uygulanır. 
Bilet fiyatının tam olarak ne olduğunu ve kullanıcının kaç yaşında olduğunu bilmektesiniz. 
Kullanıcıdan yaşını ve öğrenci kartı olup olmadığını alarak ödemesi gereken bilet fiyatını hesaplayın.
*/

#include <iostream>
using namespace std;

int main () { 

    int yas;

    double fiyat , indirimliFiyat;

    char ogrenciKarti;

    cout << "Yaşınızı giriniz: " ;
    cin >> yas;

    cout << "Öğrenci kartınız var mı? (E/H)" ;
    cin >> ogrenciKarti;

    fiyat=100.0; //varsayılan bilet fiyatı

    if (yas<=6) {
        indirimliFiyat = 0;
    }
    else if (yas <=12) {
        indirimliFiyat = fiyat *0.50;
    }
    else if (yas <= 24) {
        indirimliFiyat = fiyat *0.*90;
    } 

    if (ogrenciKarti == 'E' || ogrenciKarti == 'e') {
        indirimliFiyat=fiyat*0.90;
    }  
    else if(yas <=65) {
        indirimliFiyat = fiyat *0.70;
    }
    else {
        indirimliFiyat = fiyat;
    }
    if (ogrenciKarti =='E' || ogrenciKarti =='e'){
        indirimliFiyat= fiyat*0.90;
    }    

    cout << "Ödemeniz gereken bilet fiyatı: " << indirimliFiyat << endl;

    return 0;

}