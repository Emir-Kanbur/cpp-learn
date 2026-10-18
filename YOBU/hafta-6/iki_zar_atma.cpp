#include <iostream>
#include <cstdlib> //rand ve srand fonksiyonlarını içeren kütüphane 
#include <ctime> //time fonksiyonu için kütüphane

using namespace std;
 
int main() {

    srand(time(NULL));

    int sayi1, sayi2;
    
    sayi1 = 1 + rand() % 6;
    sayi2 = 1 + rand() % 6;
    
    cout << "Birinci Zar: " << sayi1 << endl;
    cout << "İkinci Zar: " << sayi2 << endl;

    return 0;
}
