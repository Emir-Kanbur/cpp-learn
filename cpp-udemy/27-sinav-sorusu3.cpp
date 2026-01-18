#include <iostream>
using namespace std;

int main()
{
    // C++ Programlama Sınav Sorusu
    
    // Kullanıcının Console üzerinden girdiği sayının faktöriyelini hesaplayan C++ programını yazınız.
    
    // 3! = 3*2*1 = 6

    // 4! = 4*3*2*1 = 24

    int sayi, sonuc;

    cout << " Lütfen sayiyi giriniz: ";
    cin >> sayi;
    sonuc = 1;
    
    for (int i = 1; i<=sayi; i++)
    {
       sonuc = sonuc * i;

    }

    cout << sayi << " Sayinin faktöriyeli: " << sonuc << endl;

    return 0;

}