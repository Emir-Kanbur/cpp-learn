#include <iostream>
using namespace std;

int main ()
{
    // C++ Sınav Sorusu | Programlama-1 2026 Final Sınavında bu tarz bir soruya yer verildi.

    // Kullanıcının Console'dan girdiği sayıya göre ekrana aşağıdaki çıktıyı veren programı yazınız:

    // Lütfen bir sayı giriniz: 5
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    int sayi;
    cout << "Lütfen sayiyi giriniz: ";
    cin >> sayi;

    for (int j=1; j <= sayi; j++)
    {

        for (int i=1; i <= j; i++)
        {
        cout << j << "  ";
        }
        
        cout << endl;
    } 

    cout << endl;

    return 0;
}