#include <iostream>
#include <vector>
using namespace std;

int main(){
    int boyut;
    cout << "Dizinin boyutunu girin: ";
    if (!(cin >> boyut) || boyut <= 0) {
        cerr << "Dizi boyutu pozitif bir tam sayı olmalı.\n";
        return 1;
    }

    vector<int> dizi(boyut);

    cout << "Dizi elemanlarini girin:" << endl;
    for(int i = 0; i < boyut; i++)
    {
        cout << i + 1 << ". sayiyi girin: ";
        if (!(cin >> dizi[i])) {
            cerr << "Geçersiz tam sayı.\n";
            return 1;
        }
    }
    
    int enBuyuk = dizi[0];

    for(int i = 1; i < boyut; i++) // Dizinin ilk elemanindan baslayarak karsilastir
    {
        if (enBuyuk < dizi[i])
        {
            enBuyuk = dizi[i];
        }
    }
    cout << "En buyuk sayi = " << enBuyuk << endl;

    return 0;
}