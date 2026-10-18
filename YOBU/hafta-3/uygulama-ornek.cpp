#include <iostream>

using namespace std;

int main () {

    int a, b, c;

    cout << "a sayisini giriniz: ";

    cin >> a;

    cout << "b sayisini giriniz: ";
    
    cin >> b;

    cout << "c sayisini giriniz: ";

    cin >> c;

    if (a==c && b>a) // and (ve) kullanımı
    {
        cout << "a ile c birbirine esit ve b bunlardan buyuk olma durumu" << endl;

    }

    else 

        cout << "a ile c birbirine esit degil veya b bunlardan kucuk olma durumu" << endl;

    if (a==c || b>a) // or (veya) kullanımı
    {

        cout << "a ile c birbirine esit veya b a'dan buyuk olma durumu" << endl;

    }

    else 

        cout << "a ile c birbirine esit degil ve b a'dan kucuk olma durumu" << endl;

return 0;

}