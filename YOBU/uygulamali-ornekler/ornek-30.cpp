/*
Bir hastanede hastalar için şu kriterlere göre ücret belirlenmektedir:
    Normal ziyaret: 50 TL
    Uzman ziyareti: 100 TL
    Test: 200 TL
Eğer bir hasta 65 yaşından büyükse veya 18 yaşından küçükse, tüm hizmetler için %20 indirim uygulanır. 
Ancak bu indirim, bir gün içerisinde sadece bir kere uygulanır 
(Yani eğer hem test hem uzman ziyareti varsa indirim sadece bir kere alınır).
Hastanın yaşını, hangi hizmetleri aldığını (birden fazla hizmet alabilir) 
Bu hizmetlerin toplam maliyetini alarak hastanın ödemesi gereken miktarı hesaplayın.
*/

#include <iostream>
using namespace std;

int main () {

    int yas;
    char normalZiyareti , uzmanZiyareti , test;
    double toplamFiyat = 0.0;

    cout << "Hastanın yaşını giriniz: ";
    
    cin >> yas;

    cout << "Normal Ziyaret Alındı mı? (E/H):" ;

    cin >> normalZiyareti;
    
    cout << "Uzman Ziyareti Alındı mı? (E/H):";

    cin >> uzmanZiyareti;

    cout << "Test yapıldı mı? (E/H):";

    cin >> test;

    if (normalZiyareti == 'E' || normalZiyareti == 'e') {
        toplamFiyat += 50;
    }
    if (uzmanZiyareti == 'E' || uzmanZiyareti == 'e') {
        toplamFiyat += 100;
    }
    if (test == 'E' || test == 'e') {
        toplamFiyat += 200;
    }
    if ((yas > 65 || yas < 18 ) && (normalZiyareti =='E' || uzmanZiyareti =='E' || test == 'E')) {
        toplamFiyat-=20;
    }

    cout << "Toplam Ödemeniz gereken ücret: " << toplamFiyat << endl;

    return 0;

} 