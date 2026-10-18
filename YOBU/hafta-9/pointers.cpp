#include <iostream>
using namespace std;

int main () {

    int x=15; // X'in değeri
    cout << "X'in değeri: " << x << endl;
    cout << "X'in adresi: " << &x << endl; // X'in adres

    int*ptr_x; 
   // int *ptr_x; 

    // int*ptr_x=x; pointer bir değişkene atanamaz. Adres atanabilir.

    ptr_x = &x;
    x = 20;

    cout << "X'in değeri: " << x << endl;
    cout << "X'in adresi: " << ptr_x << endl; // X'in adres

    int dizi[] = {10, 20, 30, 40, 50};

    cout << "Dizinin ilk elemanın adresi: " << dizi << endl;

    int *ptr_dizi;
    ptr_dizi = dizi;

    cout << "Dizinin ilk elemanın adresi: " << ptr_dizi << endl; // Dizinin adresi

    for (int i=0; i < 5; i++)
    {
        cout << "Dizinin " << i+1 << ". elemani: " << dizi[i] << endl;
        cout << "Dizinin " << i+1 << ". elemaninin adresi: " << &dizi[i] << endl; 
    }

    cout << "------------------------------" << endl;

    for (int i=0; i<5; i++)
    {
        cout << "Dizinin " << i+1 << ". elemani: " << *ptr_dizi << endl;
        cout << "Dizinin " << i+1 << ". elemaninin adresi: " << *ptr_dizi++ << endl;
    }
    return 0;

}
