#include <iostream>
#include <iomanip> //setprecision için gerekli kütüphane

using namespace std;

int main () 
{

    double deger = 123.456789;
    cout << deger << endl;

    // setprecision(N) manipilatörü toplam anlamlı rakam sayısını ayarlar. (significant digits) sayısını ayarlar.

    cout << setprecision(4) << deger << endl;

    // noktadan sonraki basamak sayısının gösterimini ayarlamak için beraber kullanılır.

    cout << fixed << setprecision(2) << deger << endl;


    return 0;

}