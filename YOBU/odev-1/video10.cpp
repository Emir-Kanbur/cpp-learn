
//Oynatma listesindeki 10.video |  Ders-9 C++ While,Do While Döngülerinin İşleyişi notları ve uygulamaları

#include <iostream>

using namespace std;

int main (){

  /* while (şartlar)               do

  {                               {

  //komutlar                      //komutlar    

  }                               } while (şartlar)
    */  

    int n=0;
    
    while (n<10)

    {
        cout << "n degiskenin degeri:" << n << endl;

        n=n+1;
        
        //n=n+/- işareti sayının ne kadar artacağını azalacağını belirtir.

    }

    cout << "Donguden Cikildi." << endl; 

    int a;

    do 
    {
        cout << "Bir sayi giriniz:" << endl;

        cin >> a;

    }   while (a<20);

    cout << "Donguden Cikildi." << endl;

    return 0;

} 