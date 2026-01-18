#include <iostream>
using namespace std;

void ekranaHataMesajiYazdir()
{
    cout << "Dikkat: Bir hata oluştu. " << endl;
}

void ekranaHataMesajiYazdir(string mesaj)
{
    cout << mesaj << endl;
}

void ekranaHataMesajiYazdir (int msg)
{
    cout << msg << endl;
}
int main ()
{
    // C++ Fonksiyonlar Aşırı Yükleme

    ekranaHataMesajiYazdir();
    ekranaHataMesajiYazdir("Program da Hata Meydana Geldi. ");
    ekranaHataMesajiYazdir("Hata int kullanimi. ");

    cout << "Hoscakalin \n " << endl;

    return 0;
}