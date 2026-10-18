/*
Bir ülkede, vatandaşların vergi oranları şu şekildedir:
    Yıllık geliri 20.000 TL ve altı olanlar için vergi oranı %10'dur.
    Yıllık geliri 20.001 - 50.000 TL arası olanlar için vergi oranı %20'dir.
    Yıllık geliri 50.001 TL ve üstü olanlar için vergi oranı %30'dur.
Ancak bu ülkede, bazı sosyal yardım programları da vardır. 
Eğer bir vatandaşın 2 veya daha fazla çocuğu varsa ve yıllık geliri 30.000 TL'nin altındaysa ödeyeceği vergiden 5.000 TL düşülür. 
Ayrıca, 65 yaşından büyük vatandaşlar için vergi oranında %10'luk bir indirim uygulanır.
Bir vatandaşın yaşını, yıllık gelirini ve çocuk sayısını alarak ödemesi gereken yıllık vergiyi hesaplayın
*/

#include <iostream>
using namespace std;

int main () {

    int yas , cocukSayisi;
    double yillikGelir , vergi;

    cout << "Vatandaşın yaşını giriniz: " ;
    cin >> yas;

    cout << "Vatandaşın yıllık gelirini yazınız: ";
    cin >> yillikGelir;

    cout << "Vatandaşın çocuk sayısını giriniz: " ;
    cin >> cocukSayisi;

    if (yillikGelir <= 20000) {
        vergi = yillikGelir*0.10;
    }
    else if (yillikGelir <=50000) {
        vergi = yillikGelir*0.20;
    }
    else {
        vergi = yillikGelir*0.30;
    }

    if (cocukSayisi >= 2 && yillikGelir < 30000) {
        vergi -= 50000;
    if (vergi<0) vergi= 0;
    }

    if (yas >65) {
        vergi*=0.90;
    }

    cout << "Ödemeniz gereken yıllık vergi miktarı: " << vergi << "TL" << endl;

    return 0;

}