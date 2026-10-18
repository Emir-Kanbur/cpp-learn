#include <iostream>

using namespace std;

int main () {

    /*
    vize, final ve ödevler
    vize %30, final %50, ödevler %20 not ağırlığında olacaktır.
    */

    int vizeNotu, finalNotu, odevNotu, ogrenciNotu;

    cout << "Vize notunu giriniz:";

    cin >> vizeNotu;

    cout << "Final notunu giriniz:";

    cin >> finalNotu;

    cout << "Ödev notunu giriniz:";

    cin >> odevNotu;

    ogrenciNotu = (vizeNotu * 0.3) + (odevNotu * 0.2) + (finalNotu * 0.5);

    cout << "Ogrencinin Not Ortalamasi:" << ogrenciNotu; 

    return 0;

}