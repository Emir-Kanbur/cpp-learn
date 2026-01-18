#include <iostream>
using namespace std;

int main () 
{
    // C++ break ve continue kullanımı 

    // break: döngüyü sonlandırır (döngü dışına çıkılır.)

    // continue: continue keyword'ünün altındaki kod kısımları atlanarak döngü devam ettirilir.

    for (int i=0; i<5; i++)
    {
        if(i == 3)
            break;

        cout << i << "  ";
    }

    cout << endl; 

      for (int j=0; j<5; j++)
    {
        if(j == 3)
            continue;
            
        cout << j << "  ";
    }

    // iften sonra sadece tek bir şey varsa süslü parantez ister kullanılır ister kullanılmaz.

    cout << endl;
    
    return 0;

}