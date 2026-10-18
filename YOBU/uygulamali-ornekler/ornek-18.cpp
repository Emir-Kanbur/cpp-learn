/*
Verilen char renk = 'Y'; değeri için aşağıdaki switch - case yapısının çıktısı nedir?
 
switch(renk) {
    case 'R':
        cout << "Kırmızı";
    break;
    
    case 'M':
        cout << "Mavi";
    break;
    
    case 'Y':
        cout << "Sarı";
    break;
    
    default:
        cout << "Bilinmeyen renk";
}
*/

//char da noktalı virgül kullanılıyor!

#include <iostream>
using namespace std;

int main () {

    char renk = 'Y';

    switch (renk) {

        case 'R':
            cout << "Kırmızı" << endl;
        break;

        case 'M':
            cout << "Mavi" << endl;
        break;

        case 'Y':
            cout << "Sarı" << endl;
        break;

        case 'P':
            cout << "Pembe" << endl;
        break;

        default:
            cout << " Bilinmeyen Renk" << endl;

    }

    return 0;

}