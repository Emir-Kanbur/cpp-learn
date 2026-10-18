/*  
    1. Görev – Üç Sayıdan En Küçük ve En Büyüğü
    Emir Kanbur

    Kullanıcıdan alınan 3 tam sayıyı, yazılan min3 ve max3 fonksiyonları ile 
    karşılaştırarak en küçüğünü ve en büyüğünü bulan program.
*/

#include <iostream>
using namespace std;

int min3(int a, int b, int c) {

    if (a <= b && a <= c) {
        return a;
    }
   
    else if (b <= a && b <= c) {
        return b;
    }
   
    else {
        return c;
    }
}

int max3(int a, int b, int c) {

    if (a >= b && a >= c) {
        return a;
    }

    else if (b >= a && b >= c) {
        return b;
    }

    else {
        return c;
    }
}

int main() {

    int tamSayi1, tamSayi2, tamSayi3;

    cout << "Lütfen 1.tamsayıyı giriniz: ";
    cin >> tamSayi1;

    cout << "Lütfen 2.tamsayıyı giriniz: ";
    cin >> tamSayi2;

    cout << "Lütfen 3.tamsayıyı giriniz: ";
    cin >> tamSayi3;

    int enKucuk = min3(tamSayi1, tamSayi2, tamSayi3);
    int enBuyuk = max3(tamSayi1, tamSayi2, tamSayi3);

    cout << "En Küçük Sayı : " << enKucuk << endl;
    cout << "En Büyük Sayı  : " << enBuyuk << endl;

    return 0;
}