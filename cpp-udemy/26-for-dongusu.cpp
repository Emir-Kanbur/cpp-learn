#include <iostream>
using namespace std;

// for dongusu belli bir sayıda olur.

int main() 
{
    /*
        For döngüsü, temel olarak bir kod bloğunu belirli bir sayıda ve üst üste çalıştırmak için kullanılan 
        bir döngü çeşididir.
        
    */

    // 1'den 10'a kadar olan tüm sayıları ekrana yazdıran bir for-loop yazın.

    // for (sayac tanımı ve ilk değer atama; koşul; sayaç artırımı)

    // artım en son yapılır, i <= 10; ifadesinden sonra aşağı iner cout yapar ardından i++ yapar ve başa döner.

    int i;

    for (i = 1; i <= 10; i++)
    {
      cout << i << "  " << endl;
    }

    int j;

    for (j =1; j <= 25; j++)
    {
        if(j % 2 == 0)
        {
        cout << j << " ";
        }
    }
    return 0;
}