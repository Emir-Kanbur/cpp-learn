#include <iostream>
#include <cstdlib> // rand fonksiyonu için gerekli
#include <ctime>   // time fonksiyonu için gerekli 

using namespace std;

int main () 
{   
    // rand()
    // srand()

    cout << "time(0): " << time(0) << endl;

    srand(time(0)) // Rastgele sayı üreticisini zamanla besliyoruz
    
    int rastgeleSayi = rand();
    cout << "Uretilen rastgele sayi: " << rastgeleSayi << endl;

    return 0;
}