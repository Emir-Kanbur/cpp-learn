#include <iostream>
using namespace std;

int main(){
    int boyut;
    cout << "Dizinin boyutunu girin: ";
    cin >> boyut;

    int dizi[boyut];

    cout << "Dizi elemanlarini girin:" << endl;
    for(int i = 0; i < boyut; i++)
    {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> dizi[i];
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