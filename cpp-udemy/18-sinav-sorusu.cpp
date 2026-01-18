#include <iostream>
using namespace std;

// Kullanıcıdan üç tamsayı girişi alan ve bu girdiler arasındaki en küçüğünü bulan bir program yazınız.

int main()
{
    int sayi1, sayi2, sayi3;
    
    cout << "Lütfen sayiyi giriniz: ";
    cin >> sayi1;
    cout << "Lütfen sayiyi giriniz: ";
    cin >> sayi2;
    cout << "Lütfen sayiyi giriniz: ";
    cin >> sayi3;

    if (sayi1 <= sayi2 && sayi1 <= sayi3)
    {
        cout << "Sayi1 en küçüktür. Değeri: " << sayi1 << endl;
    }
    else if (sayi2 <= sayi1 && sayi2 <= sayi3)
    {
        cout << "Sayi2 en küçüktür. Değeri: " << sayi2 << endl;
    }
    else if (sayi3 <= sayi1 && sayi3 <= sayi1)
    {
        cout << "Sayi3 en küçüktür. Değeri: " << sayi3 << endl;
    }
    return 0;
}