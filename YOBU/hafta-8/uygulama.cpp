#include <iostream>
using namespace std;

int main () {

       
    long long toplam = 0;
    int negatifSayi = 0;

    //iki boyutlu matris 3*4 boyutunda
    int matris [3][4];
       
        //elemanları kullanıcı girecek
        //negatif sayıların toplamı ve adedi

            for (int i = 0; i <3; i++)
            {
                for (int j = 0; j<4; j++)
                {
                    cout << "Matris için gerekli sayıları giriniz: ";
                    if (!(cin >> matris[i][j])) {
                        cerr << "Geçersiz tam sayı.\n";
                        return 1;
                    }

                    if (matris[i][j] < 0 ){
                        toplam += matris [i][j];
                        negatifSayi += 1;
                    }
                }
            }


    cout << "Matris içerisindeki negatif tam sayıların toplamı: " << toplam << endl;
    cout << "Matris içerisindeki negatif tam sayıların adedi: " << negatifSayi << endl;

    return 0;
}