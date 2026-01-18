#include <iostream>
using namespace std;

int hesapla(int x) 
{
    int sonuc;
    sonuc = 3*x+2;
    return sonuc;
}

int alanHesapla(int x, int y) 
{
    int alan = x*y;
    return alan; 
}

void kareAlanHesaplama (int kareKenar)
{
    cout << "kare alan: " << (kareKenar*kareKenar) << endl;
}

void nothing (){
    // normalde yazılabilir ama teknik açıdan hatalı çünkü hiçbir şey yapmıyor.
}

void isimCagirma (string isim)
{
    cout << "Merhaba " << isim << endl;
}

string adSoyadBirlestirme()
{
    string isim, soyad, adSoyad;
    cout << "Lütfen isim girin: ";
    cin >> isim;
    cout << "Lütfen soyad girin: ";
    cin >> soyad;
    adSoyad = isim + " " + soyad;
    return adSoyad;

}

int main() 
{
    // C++ Fonksiyonlar - C++ Metodlar
    // f(x) = 3x+2

    int x = 40*50;
    cout << x << endl;

    cout << "sonuc: " << hesapla(2) << endl;
    cout << "\nhoscakalin\n" << endl;
    kareAlanHesaplama(6);
    kareAlanHesaplama(8);
    isimCagirma("Emir");
    cout << adSoyadBirlestirme();


    return 0;
}