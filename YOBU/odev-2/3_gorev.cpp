/*
    3. Görev – 4 Sayıyı Dolaylı Yoldan Sıralama
    Emir Kanbur

int min4(int a, int b, int c, int d);
Bu fonksiyonla önce en küçük sayıyı bulunuz. Daha sonra kalan üç sayı için
min3 fonksiyonunu kullanarak 4 sayıyı küçükten büyüğe sıralı şekilde ekrana
yazdırınız. Bu kısımda da dizi kullanmayınız.
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

int min4(int a, int b, int c, int d) {
    int m = min3(a, b, c); 
    if (d < m) {
        return d;
    } else {
        return m;
    }
}

void kalanlariSirala(int a, int b, int c) {
    int kucuk = min3(a, b, c);
    cout << kucuk << " " ;

    if (a == kucuk) {
        if (b < c) cout << b << " " << c;
        else cout << c << " " << b;
    }
    else if (b == kucuk) {
        if (a < c) cout << a << " " << c;
        else cout << c << " " << a;
    }
    else {
        if (a < b) cout << a << " " << b;
        else cout << b << " " << a;
    }
}

int main() {
    int sayi1, sayi2, sayi3, sayi4;

    cout << "Lutfen 4 tamsayi giriniz:" << endl;
    cout << "1. Sayi: "; cin >> sayi1;
    cout << "2. Sayi: "; cin >> sayi2;
    cout << "3. Sayi: "; cin >> sayi3;
    cout << "4. Sayi: "; cin >> sayi4;

    int enKucuk = min4(sayi1, sayi2, sayi3, sayi4);
    cout << "Siralama: " << enKucuk << " ";

    if (sayi1 == enKucuk) {
        kalanlariSirala(sayi2, sayi3, sayi4);
    }
    else if (sayi2 == enKucuk) {
        kalanlariSirala(sayi1, sayi3, sayi4);
    }
    else if (sayi3 == enKucuk) {
        kalanlariSirala(sayi1, sayi2, sayi4);
    }
    else {
        kalanlariSirala(sayi1, sayi2, sayi3);
    }

    cout << endl;

    return 0;
}