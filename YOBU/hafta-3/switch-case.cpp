#include <iostream>

using namespace std;

int main () {

    char grade = 'B';

    switch (grade)
    {
        case 'A':

        cout << "Sonuc mukemmel." << endl;

        break;

        case 'B':

        cout << "Sonuc iyi." << endl;
        
        break;

        case 'C':

        cout << "Sonuc gecerli." << endl;

        break;

        default:
        
        cout << "Sonuc basarisiz." << endl;
    }

    return 0;
}