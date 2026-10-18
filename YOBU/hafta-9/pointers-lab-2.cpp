#include <iostream>
using namespace std;

void yanlisDegistir (int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
}

void dogruDegistir (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int a=5;
    int b=8;

    cout << "Orijinal Degerler a, b = " << a << ", " << b << endl;

    yanlisDegistir (a, b);
    cout << "Yanlis degisim a, b -> " << a << ", " << b << endl;

    dogruDegistir (&a, &b);
    cout << "Dogru degisim a, b -> " << a << ", " << b << endl;

    return 0;

    //a = 5 , b = 8
    //a = 5 , b = 8
    //a = 8 , b = 5
}