#include <iostream>

using namespace std;

int main (){

    //&& = ve operatörü , || = veya , ! = not değil anlamına gelir.

    // < Küçüktür , > Büyüktür , >= Büyük Eşittir , <= Küçük Eşittir , ! = Eşit değildir , !< Küçük Değildir , !> Büyük Değildir.

    // % mod alma operatörüdür.

    int sayi;

    cout<<"Lütfen sayınızı giriniz:";

    cin>> sayi;

    if(sayi % 2 == 0) {

        cout<<"Sayı çifttir."<<endl;

    }

    else{

    cout<<"Sayı çift değildir."<<endl;
 
    }
}