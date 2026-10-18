// Elemanları bulana kadar devam edilsin.

#include <iostream>
using namespace std;

int LineerArama (double sayilar[] , int arananSayi , int boyut)
{
    for (int i = 0; i<boyut; i++)
    {
        if (sayilar[i] == arananSayi)
        return i;
    }
    return -1; // Dizide eleman bulunamadı.
}

int main () {

    int boyut = 10;
    double sayilar [10];

    for (int i=0; i<boyut; i++)
    {
        sayilar[i] = (i*2)+(3*i);
    }

    int arananSayi;

    cout << "Aradiğiniz sayiyi giriniz: ";
    cin >> arananSayi;

    int index=LineerArama(sayilar , arananSayi ,boyut);

    if (index != -1)
    cout << "Aradığınız eleman bulundu. Dizinin " << index+1 << " . elemanıdır. ";
    else 

    cout << "Aradığınız eleman bulunamadı";
    
    return 0;

}