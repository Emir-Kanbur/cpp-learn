#include <iostream>
using namespace std;

void SecmeliSirala(int dizi[], int boyut) {
    for (int i = 0; i < boyut - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < boyut; j++) {
            if (dizi[j] < dizi[minIndex]) {
                minIndex = j;
            }
        }
        // En küçük elemanı bulun ve yer değiştir
        if (minIndex != i) {
            int temp = dizi[i];
            dizi[i] = dizi[minIndex];
            dizi[minIndex] = temp;
        }
    }
}

int main() {
    int sayilar[] = {64, 25, 12, 22, 11};
    int boyut = 5;

    SecmeliSirala(sayilar, boyut);

    // Sıralanmış diziyi yazdırma
    for (int i = 0; i < boyut; i++) {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    return 0;
}
