#include <iostream>
#include <string>
using namespace std;

int Topla (int sayi1, int sayi2){

    int result;

    result=(sayi1+sayi2);

return result;

}

void Merhaba (string name) { 

     cout << "Merhaba " << name << endl;

}

int main () {

    string isim;

    cout << "Adinizi Giriniz: ";
    
    cin >> isim;

    Merhaba (isim);

    int x, y, sonuc;
    
    x=10;

    y=5;

    sonuc = Topla (x,y);

    cout << "Sonuc:" << sonuc << endl;

    return 0;
}