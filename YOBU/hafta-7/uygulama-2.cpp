#include <iostream>
using namespace std;

int main () {

    int n;

    cout << "Kaç elemanlı dizi gireceksiniz: ";
    cin >> n;
    
    int dizi[n];
    cout << n << " adet sayıyı giriniz: " ;
    
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " sayilar: " ;
        cin >> dizi[i];
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