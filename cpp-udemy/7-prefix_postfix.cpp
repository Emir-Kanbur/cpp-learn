#include <iostream>
using namespace std;

int main () 
{

    // POSTFIX

    int x = 7;
    // x = x+1;
    x++; // arttırma operatorü (Postfix)

    int y = 10;
    //y = y-1; 
    y--; //azaltma operatörü (Postfix)

    cout << x << endl;
    cout << y << endl;


    // PREFIX

    int z = 20;
    ++z;

    int k = 15;
    --k;

    cout << z << endl;
    cout << k << endl;


    // Prefix (++x ve --x) ile Postfix (x++ ve x--) Arasındaki Farklar 
    // 1. Postfix (x++) => ++ veya -- değişkenin sağındaysa buna postfix denir
    //
    // Değişkenin önceki değeri kullanılır, ardından değer 1 arttırılır.
    // Ornek:

    int e = 7;
    int m = e++;
    cout << "e: " << e << endl;
    cout << "m: " << m << endl;

    int e2 = 7;
    int m2= e--;
    cout << "e: " << e2 << endl;
    cout << "m: " << m2 << endl;

    // Prefix (++x) => ++ veya -- değişkenin solundaysa buna prefix denir
    //
    // Değişkenin değeri önce arttırılır, sonra kullanılır.
    // Ornek:
    
    int r1 = 99;
    int d1 = ++r1;
    cout << "r: " << r1 << endl;
    cout << "d: " << d1 << endl;

    int r2 = 99;
    int d2 = --r2;
    cout << "r: " << r2 << endl;
    cout << "d: " << d2 << endl;

    int sayi = 223;
    --sayi;

    cout << sayi << endl;
    return 0;
}