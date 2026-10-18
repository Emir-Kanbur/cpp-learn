/* 
Aşağıdaki kod parçasının çıktısı nedir?
 int a = 5, b = 10, c = 15, d = 20;
 if (a + b > c && c + d > b)
 {
 if (a + c > d || b + d < a)
 cout << "Kod 1";
 else
 cout << "Kod 2";
 }
 else
 cout << "Kod 3";
*/

#include <iostream>
using namespace std;

int main() {

    int a=5 , b=10 , c=15 , d=20;

    if (a+b > c && c + d > b) {

        if (a +c >d || b+d < a)
        cout << "Kod1" << endl;
        else 
        cout << "Kod2" << endl;
        }
        else 
        cout << "Kod3" << endl;

    return 0;

}