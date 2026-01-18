#include <iostream>

using namespace std;

int main (){

    int sayi , faktoriyel = 1;

    cout<<"Faktöriyelini bulmak istediğiniz sayıyı giriniz:";

    cin>>sayi;

    for (int i = 1 ; i<=sayi; i++){

        faktoriyel *= i;

    }

cout<<"Faktöriyel:"<<faktoriyel<<endl;
 

}