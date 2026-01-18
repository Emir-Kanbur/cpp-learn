#include <iostream>
using namespace std;

int main()
{
    /*
    * While Döngüsü
    *
    * Önceden belirlenmiş bir koşul bozulana kadar devam eder.
    * Koşulun her kontrolden sonra döngü içerisindeki işlemler bir kez yapılır.
    * Koşul bozulduktan sonraki ilk kontrolde döngü terk edilir.
    * 
    * While (koşul)
    * 
    *   // yapılacak işlem 1
    *   // yapılacak işlem 2
    * 
    *   //
    * 
    */

    int index = 0;

    while (index <= 3)
    {
        setlocale(LC_ALL, "Turkish");
        cout << "index değeri 3'ten küçüktür.\n";
        index++; // index artmaz ise sonsuz döngü olur.
    }

    cout << "index: " << index << endl;
    
    cout << "Program sonu. \n";

    return 0;

}