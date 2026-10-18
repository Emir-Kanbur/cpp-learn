#include <iostream>

using namespace std;

int main () {

    char renk;

    cout << "Renk seçeneği giriniz: Mavi için M, Kahverengi için K, Sari için S : ";

    cin >> renk;

    switch (renk)
     
    {

        case 'S':

        cout << "Renk Sari" << endl;

        break;

        case 'M':

        cout << "Renk Mavi" << endl;

        break;

        case 'K':

        cout << "Renk Kahverengi" << endl;

        break;

        default:

        cout << "Yanlis Karakter Girdiniz." << endl;
    }

    return 0;

}