#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n;

    cout << "Kaç elemanlı dizi gireceksiniz: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Dizi boyutu pozitif bir tam sayı olmalı.\n";
        return 1;
    }
    
    vector<int> dizi(n);
    cout << n << " adet sayıyı giriniz: " ;
    
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " sayilar: " ;
        if (!(cin >> dizi[i])) {
            cerr << "Geçersiz tam sayı.\n";
            return 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (dizi[i] % 2 == 0)
            cout << dizi[i] << " Çift Sayı " << endl;
        else 
            cout << dizi[i] << " Tek Sayı " << endl;
    }
    return 0;
}