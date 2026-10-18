#include <iostream>
using namespace std;

int faktoriyel (int a)
{
    if (a == 0)
        return 1;
    else
        return a * faktoriyel(a - 1);
}

int main () {
    int sayi;
    cout <<" Lütfen bir sayı giriniz: ";
    cin >> sayi;
    cout << sayi << " != Faktöriyel: " << faktoriyel(sayi) << endl;
    return 0;
}