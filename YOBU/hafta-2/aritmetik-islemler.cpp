#include <iostream>

using namespace std;

int main () {

        /* Aritmetik İşlemler
            İşlem Önceliği:
            1)Parantez içi
            2)Çarpma, Bölme ve  Mod(%) (7 mod 4)
            3)Toplama ve Çıkarma
        */

    int sonuc;
    
    sonuc = 26 - 12 * 2 + (15 - 10 / 2) - 8 + 9 % 6;

    /* 
    26-12*2+(10)-8
    26-24+10-8
    2+10 -8
    4
    */

    cout << "Sonuc:" << sonuc << endl;

    sonuc = 7 % 4 - 4 * 3;

    cout << "Sonuc:" << sonuc << endl;


    return 0;

}