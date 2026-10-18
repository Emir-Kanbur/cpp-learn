/*
Bir online alışveriş sitesi, kullanıcıların alışverişlerine göre indirim uygulamaktadır. 
Eğer kullanıcı 100 TL ve üzeri alışveriş yaparsa %10, 200 TL ve üzeri alışveriş yaparsa %15, 
500 TL ve üzeri alışveriş yaparsa %20 indirim uygulanır.
Eğer kullanıcı 100 TL'nin altında alışveriş yaparsa hiçbir indirim uygulanmaz. 
Bu bilgilere göre, kullanıcının alışveriş tutarını ve uygulanan indirim oranını ekrana yazdıran kodu yazınız.
*/

#include <iostream>
using namespace std;

int main (){

    double tutar;

    cout << "Harcama miktarınızı giriniz: " ;
    cin >> tutar;

    if (tutar >= 100)
        cout << "Uygulanan İndirim Miktarı %10" << endl;
    
    else if (tutar >= 200)
        cout << "Uygulanan İndirim Miktarı %15" << endl;

    else if (tutar >= 500)
        cout << "Uygulanan İndirim Miktarı %20" << endl;

    else 
        cout << "İndirim Uygulanmamaktadır." << endl;
    
    return 0;

} 

