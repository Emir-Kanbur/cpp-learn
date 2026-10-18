
//Oynatma listesindeki 8.video |  Ders-7 C++ Karar Yapıları (IF,ELSE-IF,ELSE) notları ve uygulamaları

#include <iostream>

using namespace std;

int main () {

    /* if ve else:
    Türkçe de o değilse budur gibi düşünebiliriz. 
    Eğer seçenek doğru ise if'li değeri okur yanlış ise else değerini okur aşağıdaki örnekte o şekilde.
    Ancak kullanıcı bunları farklı girerse o zaman tam tersi olur gibi düşünebiliriz.
    */
    int a = 100;

    if ( a==100 ) 

    {

    cout << "Sart Saglandi" << endl;

    cout << "Komutlar Calistirildi" << endl;
    
    }   else 
    {
        cout << "Sart Saglanmadi" << endl;

        cout << "Komutlar Calistirildi-2" << endl;

    }
    return 0;
 
}