#include <iostream>
using namespace std;

int main() 
{
    // != ( Eşit Değil )

    int x = 1234;
    int y = 222;

    if (x != y)
    {
        cout << "yanlis sifre\n";
    }
    else
    {
        cout << "dogru sifre\n";
    }

    // && ( (AND / Ve) Mantıksal Operatörü)

    int sayi1, sayi2;

    cout << "Sayilari giriniz: ";
    cin >> sayi1;
    cout << "Sayilari giriniz: ";
    cin >> sayi2;

    if (sayi1 > 0 && sayi2 > 0)
    {
        cout << "her iki sayi da pozitif\n";
    }  
    else if (sayi1 < 0 && sayi2 < 0)
    {
        cout << "her iki sayi da negatif\n";
    }
    else if (sayi1 < 0 || sayi2 < 0)
    {
        cout << "sayilarinizdan birisi negatif\n";
    }

    int e = 5;
    
    if (e == 5)
    {
        cout << "e'ye eşittir\n";
    }

    int k= 5;
    
    if (!(k== 5))
    {
        cout << "m'ye eşittir\n";
    }
    else 
    {
        cout << "eşit değil\n";
    }

    bool flag = true;

    if (!(flag))
    {
        cout << "herhangi bir mesaj\n";
    }
    return 0;
}