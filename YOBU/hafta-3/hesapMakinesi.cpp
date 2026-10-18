#include <iostream>

using namespace std;

int main()
{

    int sayi1, sayi2;

    int islem;

    cout << "1. sayiyi giriniz: ";

    cin >> sayi1;

    cout << "2. sayiyi giriniz: ";

    cin >> sayi2;

    cout << "Yapmak istediginiz islemi seciniz: Toplama (1), Cikarma (2), Carpma (3), Bolme (4): ";

    cin >> islem;

    switch (islem)
    {
    case 1:

        cout << "Toplama islemi sonucu: " << sayi1 + sayi2;

        break;

    case 2:

        cout << "Cikarma islemi sonucu: " << sayi1 - sayi2;

        break;

    case 3:

        cout << "Carpma islemi sonucu: " << sayi1 * sayi2;

        break;

    case 4:

        if (sayi2 != 0)
        {
            cout << "Bolme islemi sonucu: " << sayi1 / sayi2;

            cout << "\nBolme islemi sonucu kalan: " << sayi1 % sayi2;
        }
        else
        {
            cout << "Bolen sayi 0 olamaz!";
        }

        break;

    default:

        cout << "Lutfen 1 ile 4 arasinda yapmak istediginiz islemi girin!";
        
        break;
    }

    return 0;
}