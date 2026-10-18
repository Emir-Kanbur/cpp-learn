#include <iostream>
using namespace std;

int main () {

    int sayi1, sayi2;
    int islem;

    cout << "Lütfen 1. sayiyi giriniz: " ;
    cin >> sayi1;

    cout << "Lütfen 2.sayiyi giriniz: " ;
    cin >> sayi2;

    cout << "Lütfen yapmak istediginiz islemi seciniz: Toplama (1) Çikarma (2) Çarpma (3) Bölme (4)";
    cin >> islem;

    switch (islem) {

        case (1):
    cout << "Toplama isleminizin sonucu: " << sayi1 + sayi2;
        break;

        case (2):
    cout << "Çıkarma isleminizin sonucu: " << sayi1 - sayi2;
        break;

         case (3):
    cout << "Çarpma isleminizin sonucu: " << sayi1 * sayi2;
        break;

        case (4):

    if (sayi2 !=0) {
        cout << "Bölme isleminizin sonucu: " << sayi1 / sayi2;
        cout << "\nBolme isleminizin kalan sonucu: " << sayi1 % sayi2;
    }
    else

    cout << "Bölme islemi yapilamaz. " ;

        break;

    default:
    cout << "Lütfen yapmak istediğiniz işlemi seciniz: Toplama (1) Çıkarma (2) Çarpma (3) Bölme (4)";


}

    return 0;
}   