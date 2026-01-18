#include <iostream>
using namespace std;

 /* if (koşul)
    {
        Yapılacak işlemler
    }
    else
    {
        Yapılacak işlemler 2
    }    
    */

int main () 
{
    bool sicakMi = true;

    if (true)
    {
        cout << "Ortam Sicak ( boolen) \n";
    }
    else
    {
        cout << "Ortam Sicak Değil ( boolen) \n";
    }

    int sicaklik;
    sicaklik = 40;

    if (sicaklik >= 35)
    {
        cout << "Ortam Sicak\n";
    }
    else //kosul yanlis ise
    {
        cout << "Ortam Sicak Değil\n";
    }

    int derece;
    cout << "Sıcaklik derecesini giriniz: ";
    cin >> derece;


    if (derece >= 35)
    {
        cout << "Ortam Sicak\n";
    }
    else //kosul yanlis ise
    {
        cout << "Ortam Sicak Değil\n";
    }


    int sifre = 1234;
    int kullaniciGirdisi;
    cout << "Lütfen şifrenizi giriniz: ";
    cin >> kullaniciGirdisi;

    if(kullaniciGirdisi == sifre)
    {
        cout << "Şifre başarılı.\n";
    }
    else
    {
        cout << "Şifre yanlış.\n";
    }

    return 0;

}