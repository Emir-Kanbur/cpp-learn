#include <iostream>
#include <cmath>
using namespace std;    

//Fonksiyon Prototipleri
int topla(int, int);
int cikar(int, int);
void selamla();

int main() {

    int x,y;

    selamla ();

    cout << "Lütfen birinci sayıyı giriniz: ";
    cin >> x;

    cout << "İkinci sayıyı giriniz: ";
    cin >> y;

    int sonuc = topla (x,y);
    cout << "Toplam Sonucu: " << sonuc << endl;

    sonuc = cikar (x,y);
    cout << "Çıkarma Sonucu: " << sonuc;

    return 0;
}
// Fonksiyon Tanımları
void selamla() {
    cout << "Hoşgeldiniz!" << endl;
}

int topla(int a, int b) {
    return a + b;
}

int cikar(int a, int b) {
    return a - b;
}