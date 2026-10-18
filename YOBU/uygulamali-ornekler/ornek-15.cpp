/*
 Aşağıdaki kod parçasının çıktısı nedir?
    int x = 4, y = 5;
    
    if (x == y)
         cout << "Eşitler";
    else
         cout << "Eşit değiller";
*/

#include <iostream>
using namespace std;

int main (){

    int x=4 , y=5;

    if (x==y)
        cout << " x ve y değeri birbirine eşit." << endl;

    else
        cout << " x ve y değeri birbirine eşit değildir. " << endl;

    return 0;

} 