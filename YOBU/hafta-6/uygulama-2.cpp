#include <iostream>
using namespace std;

void yazdirTekrarli(int n, int tekrar)
{
    if (n==0)
        return;
    else 
    {
        for (int i = 0; i < tekrar; i++)
        {
            cout << n << " ";
        }
        cout << endl;
        yazdirTekrarli(n-1, tekrar);
    }
}

int main () {
    int sayi, tekrar;
    cout << "Lütfen bir sayı giriniz: ";
    cin >> sayi;
    cout << "Lütfen tekrar sayısını giriniz: ";
    cin >> tekrar;
    yazdirTekrarli(sayi, tekrar);
    return 0;   
}