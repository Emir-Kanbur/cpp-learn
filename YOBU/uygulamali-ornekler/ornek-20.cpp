/* 
Aşağıdaki kod parçası hangi durumda "İşlem başarılı!" mesajını ekrana yazdırır?
    
int x = 5, y = 10, z = 15;
    
    if (x < y && z > y)
        cout << "İşlem başarılı!";
    else
        cout << "İşlem başarısız!";
*/

#include <iostream>
using namespace std;

int main () {

    int x=5 , y=10 , z=15;

        if (x<y && z>y)
            cout << "İşlem Başarılı!";
        else
            cout << "İşlem Başarısız!";

    return 0;
}