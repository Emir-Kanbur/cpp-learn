/*
Kullanıcıdan iki tam sayı alan, bu sayıların farkını, çarpımını, ikinci sayının 
birinci sayıya bölümünden elde edilen sonucu ve kalanı hesaplayan bir C++ programı yazınız.
*/

//return 1 hata kodu ile programı sonlandıracak

#include <iostream>
using namespace std;

int main () {

    int sayi1 , sayi2 , carpim , cikarma , bolum , toplam , kalan;

        cout << "Birinci sayıyı giriniz: ";
        cin >> sayi1;

        cout << "İkinci sayıyı giriniz: " ;
        cin >> sayi2;

        toplam = sayi1 + sayi2;
        cikarma = sayi1 - sayi2;
        carpim = sayi1 * sayi2;
        
        if (sayi2 !=0) {
            bolum = sayi1 / sayi2;
            kalan = sayi1 % sayi2;
        }
        else {
            cout << "Bölen 0 olamaz. " << endl;
        return 1;
        }
        cout << "Toplam Sonuç: " << toplam << endl;
        cout << "Çıkarma Sonuç: " << cikarma << endl;
        cout << "Çarpma Sonuç: " << carpim << endl;
        cout << "Bölüm Sonuç: " << bolum << endl;
        cout << "Bölümde Kalan Değer: " << kalan << endl;

    return 0;
}