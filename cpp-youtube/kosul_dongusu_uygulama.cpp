#include <iostream>

using namespace std;

int main () {

    //&& = ve operatörü , || = veya , ! = not değil anlamına gelir.

    // < Küçüktür , > Büyüktür , >= Büyük Eşittir , <= Küçük Eşittir , ! = Eşit değildir , !< Küçük Değildir , !> Büyük Değildir.

    // % mod alma operatörüdür.
    
    int OgrenciNotu;

    cout<<"Lütfen notunuzu giriniz:"<<endl;

    cin>> OgrenciNotu;

    if (OgrenciNotu < 0 || OgrenciNotu>100) {

        cout<<"Lütfen geçerli aralıklarda not giriniz!"<<endl;

    }
     
    else if (OgrenciNotu>=70) {

        cout <<"Sınavdan başarı ile geçtiniz."<<endl;
    }

    else if (OgrenciNotu<70 && OgrenciNotu>=50) {

        cout<<"Lütfen Bütünleme Sınavına giriniz."<<endl;
    }

    else if (OgrenciNotu<50){

        cout<<"Dersten kaldınız."<<endl;
    }

    return 0;
}