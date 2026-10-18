#include <iostream>
#include <cstdlib> //rand ve srand fonksiyonlarını içeren kütüphane 
#include <ctime> //time fonksiyonu için kütüphane

using namespace std;
 
int main() {

    srand(time(NULL));
    int sayi1, i;

    for (i=1; i<11; i++)
    {
        sayi1 = rand();

        cout << sayi1 << " " ;
    } 

    return 0;
}