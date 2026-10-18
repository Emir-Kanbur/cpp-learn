/* 
 Verilen a = 10, b = 20 ve c = 10 değerleri için aşağıdaki kodun çıktısı nedir?
    
    if (a == c && b > a)
        cout << "Doğru";
     else
         cout << "Yanlış";
*/

#include <iostream>
using namespace std;

int main() {

    int a=10 , b=20 , c=10;

    if (a==c && b > a)
        cout << "Doğru" << endl;
    
    else 
        cout << "Yanlış" << endl;

     return 0;
}