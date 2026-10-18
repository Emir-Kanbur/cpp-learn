#include <iostream>
#include <cmath>
using namespace std;

int ustHesaplama (int sayi, int ust){

    int sonuc=1;

    for(int i = 0; i < ust; i++) {

        sonuc *= sayi;

        
    }
    return sonuc ;
}

int main () {

    int sayi1, sayi2;

    cout << "Lutfen 1.sayiyi giriniz: ";
    cin >> sayi1;

    cout << "Lutfen 2.sayiyi giriniz: ";
    cin >> sayi2;

    //kendi fonksiyonumuz
    cout << sayi1 << " 'nin " << sayi2 << ". kuvveti eşittir " << ustHesaplama (sayi1, sayi2) << endl; 

    //cmath kutuphanesinde kullandığımız fonksiyon
     cout << sayi1 << " 'nin " << sayi2 << ". kuvveti eşittir " << pow(sayi1, sayi2) << endl;

    return 0;
} 