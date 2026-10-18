// ogrenci vize final ve odev not hesaplama
// vize %30 odev %20 etkiler 
//dersin ortalamasını ver 
#include <iostream>
using namespace std;

int main () {

    double vizeNotu, odevNotu;

    cout << "Vize notunu giriniz:";

    cin >> vizeNotu;

    cout << "Odev notunu giriniz:";

    cin >> odevNotu;

        double ortalama = 0.4*vizeNotu+0.1*odevNotu;

        cout << "Not Ortalamaniz: " << ortalama << endl;

    return 0;
}

   