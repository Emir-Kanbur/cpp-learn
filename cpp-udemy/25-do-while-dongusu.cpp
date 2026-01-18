#include <iostream>
using namespace std;

// şifre gibi programlarda do-while kullanılabilir. Çok mantıklıdır.

int main() 
{
    // do - while 

    /*
    
    * While (koşul) - (sadece true olduğunda çalışır)
    * 
    *   // yapılacak işlem 1
    *   // yapılacak işlem 2
    * 
    * 
    * Do -While (En az 1 kez yapılır. (Doğru da yanlış da olsa çalışır))
    *   // yapılacak işlem 1
    *   // yapılacak işlem 2
    * 
    *   */

    int sifre = 1234;
    int input;

    do {
        cout << "Lütfen şifrenizi giriniz: ";
        cin >> input;
    } while (input != sifre);

    cout << "SkyNet'e hoş geldiniz. \n";

    return 0;

}