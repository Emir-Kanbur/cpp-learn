
//Oynatma listesindeki 7.video |  Ders-6 Giriş Çıkış İşlemleri (cin,cout,getline,stringstream) notları ve uygulamaları

#include <iostream>

using namespace std;

#include <string>

#include <sstream>

int main () {

    /* Temel Giriş - Çıkış Komutları:
    cin = Kullanıcıdan bilgi alır.
    cout = Ekrana çıktı verir.
    cerr = Hata komutu olarak bilinir.
    clog = loglama komutu olarak bilinir (log = kayıt)      */

    /* getline string ile kullanılıyor int ile kullanılamıyor. */

    cout << "Merhaba" <<endl;

    cout << 3.14 << endl;

    cout << 3.14 << 5 << endl;

    cout << 6.12 << " " << 9 << endl;

    cout << 19.14 << " " << 89 << "\n";

    string a = "MERHABA";

    cout << a << endl;

    string ad;

    cout << "Merhaba senin adin ne?" <<endl;

    cin >> ad; //sadece tek kelime alır

    cout << "Ad:" << ad << endl;

     string isim;

    cout << "Merhaba senin adin ne?" <<endl;

    getline (cin,isim);

    int e;

    stringstream ("100") >> e;

    cout << e*2 << endl;

    string say;

    int f;

    cout << "Bir sayi giriniz:";

    getline (cin,say);
    
    stringstream (say) >> f;

    cout << f*3 << " Girdiğiniz sayinin iki katidir. ";

    return 0;

}