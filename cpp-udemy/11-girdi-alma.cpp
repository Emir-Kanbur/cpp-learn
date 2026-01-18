#include <iostream>
using namespace std;

int main () 
{
    string isim;
      
    cout << "Isim: " << isim;
    
    cin >> isim;

    int en, boy, alan;

    cout << "Lütfen dikdörtgenin enini giriniz: ";
    cin >> en;

    cout << "Lütfen dikdörtgenin boyunu giriniz: ";
    cin >> boy;

    alan = en * boy;

    cout << "Dikdörtgenin alanini: " << alan << endl;



    return 0;
}