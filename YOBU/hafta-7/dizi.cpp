#include <iostream>
using namespace std;
 
int main (){

    //int sayilar[];  Bu eksik tanımlamadır.
    //int sayi [5]; 5 Elemenalı bir dizi tanımlaması, ilk değer tanımlaması yapılmamış
    

    int sayilar [] = { 1 , 2, 3 }; // 4 Elemanlı bir dizi tanımlanmıştır.

    //cout << "Dizinin ilk elemanı dizi [0] = " << sayilar [0];

    for (int i = 0; i < 3; i++)
    {
            cout << "Dizinin " << i+1 << ". elemanı yani sayılar ["<<i<<"]= " << sayilar [i] << endl;
    }


    return 0;
}
