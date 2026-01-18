#include <iostream>
using namespace std;

// switch - case kullanımı

int main() 
{
    int gun;
    cout << "Haftanın gününü giriniz: ";
    cin >> gun;

    switch (gun)
    {
        case 1:
            cout << " Pazartesi ";
        break;
        
        case 2:
            cout << " Salı ";
        break;

        case 3:
            cout << " Çarşamba ";
        break;

        case 4: 
            cout << " Perşembe ";
        break;

        case 5:
            cout << " Cuma ";
        break;

        case 6:
            cout << " Cumartesi ";
        break;

        case 7:
            cout << " Pazar ";
        break;

        default:
            cout << " Yanlis deger girildi.\n";
    } 



    return 0;

}