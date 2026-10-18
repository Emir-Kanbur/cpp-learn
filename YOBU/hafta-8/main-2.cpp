#include <iostream>
using namespace std;

    //Seçmeli sıralama fonksiyonu
    void secmelisirala(int dizi[], int boyut) {
        for(int i = 0; i < boyut -1; i++){
            int enKucukIndex = i;
            for(int j = i+1; j < boyut; j++){
                if(dizi[j] < dizi[enKucukIndex]){
                    enKucukIndex = j;
                }
            }
            swap(dizi[i], dizi[enKucukIndex]);
        }
    }
    int main() {
        int sayilar[] = {64, 25, 12, 22, 11};
        secmelisirala(sayilar, 5);
        // Sıralanmış diziyi yazdırma
        for(int i = 0; i < 5; i++){
            cout << sayilar[i] << " ";
        }
        cout << endl;
        return 0;
    }