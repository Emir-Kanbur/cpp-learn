/*
Öğrencinin notu 50 ve üstü ise dersi geçer altında ise dersten kalır. Bu ornege uygun kodları yaziniz.
*/

/*
IF ogrencininNotu >= 50 THEN 
 PRINT “Geçti”
 ELSE
 PRINT “Kaldı”
 ENDIF
*/

#include <iostream>

using namespace std;

int main () {

    int dersNotu;

    cout << "Lütfen Ders Notunuzu Giriniz: ";

    cin >> dersNotu;

    if (dersNotu>=50)

    cout << "Dersi geçtiniz" << endl;

    else 

    cout << "Dersten Kaldiniz" << endl;

    return 0;
}