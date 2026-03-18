#include <iostream>
using namespace std;

int main()
{
    int sayi1, sayi2,sonuc;
    int islem; // işlem değeri toplama=1, çıkarma=2, çarpma=3, bölme=4 olarak seçilecek.

    cout << "Lütfen sayilari giriniz: ";
    cin >> sayi1;
    cout << "Lütfen sayilari giriniz: ";
    cin >> sayi2;

    cout << "Yapılacak işlmei seçiniz (Toplama (1), Çikarma(2), Çarpma(3), Bölme(4)) ";
    cin >> islem;

    if(islem == 1)
    {
        sonuc = sayi1 + sayi2;
        cout << " İşleminizin sonucu: " << sonuc << endl;
    }
    else if (islem == 2)
    {
        sonuc = sayi1 - sayi2;
        cout << " İşleminizin sonucu: " << sonuc << endl; 
    }
    else if (islem == 3)
    {
        sonuc = sayi1 * sayi2;
        cout << " İşleminizin sonucu: " << sonuc << endl;
    }
    else if (islem == 4)
    {
        if (sayi2 == 0)
        {
            cout << "Hatalı girdi. İşlem başarısız.";
        }
        
        else
        {
            sonuc = sayi1 / sayi2;
            cout << " İşleminizin sonucu: " << sonuc << endl;
        }
    }
    else 
    {
        cout << "Hatalı girdi de bulundunuz." << endl;
    }
    return 0;
}
