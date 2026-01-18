#include <iostream>

using namespace std;

int main (){

//break = Döngüyü şarta bağlı olarak tamamen durdurur.Döngüden çıkartır.

    for (int i = 0; i<3;i++) {

        if(i==2) {

            break;
        }

    cout<< i << endl;
 
    }

    int h = 10;

    while (h<50) {

        if (h==35) {

            break;

        }

        h++;

    cout<<h<<endl;

    }

}