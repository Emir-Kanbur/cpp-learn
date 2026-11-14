#include <iostream>
#include <cmath> // matematik kütüphanesi

using namespace std;

int main () // main fonksiyonu
{
    int sonuc;

    sonuc = pow (2,3); //pow üs almak için kullanılır.

    cout << "sonuc: " << sonuc << endl;

    int x, y;

    cout << "Birinci değeri giriniz: ";
    if (!(cin >> x)) {
        cerr << "Geçersiz tam sayı.\n";
        return 1;
    }

    cout << "İkinci değeri giriniz: ";
    if (!(cin >> y)) {
        cerr << "Geçersiz tam sayı.\n";
        return 1;
    }

    double sonuc2 = pow(x, y);

    cout << "sonuc: " << sonuc2 << endl;

    int sonuc3;

    sonuc3 = floor(2.7); // floor alt değere yuvarlar.

    cout << "sonuc: " << sonuc3 << endl;

    int sonuc4;

    sonuc4 = ceil (2.1); // ceil üst değere yuvarlar.

    cout << "sonuc: " << sonuc4 << endl;

    int sonuc5;

    sonuc5 = round (2.58); // nereye yakınsa oraya yuvarlar.

    cout << "sonuc: " << sonuc5 << endl;

    return 0;

}