
//Oynatma listesindeki 6.video |  Ders-5 Operatörler (Atama,Aritmetik,Mantıksal,İlişkisel) notları ve uygulamaları

#include <iostream> 

using namespace std;

int main () {

    /*       OPERATÖRLER:

    Atama Operatörleri ( = )
    Aritmetik Operatörler ( +, -, *, /, % )
    Bileşik Atama ( +=, -=, *=, /=, %= )
    İlişkisel ve Karşılaştırma Operatörleri ( ==, !=, >, <, >=, <= )
    Mantıksal Operatörler ( !, && , || )
    Artırma ve Eksiltme ( ++, -- )
    Koşullu üçlü operatörler ( ? )     */

      /* Atama Operatörü:
    Atama her zaman sağdan sola doğru olur. Asla soldan sağa doğru bir atama olamaz. 
    Bu ifade değişkene bir tam sayı değeri atar.    */

    int a = 10;

    cout << a << endl;

    /*  Aritmetik Operatörler:
    Temel düzeyde matematiksel işlemleri yapmada yardımcı olurlar.  */

    int b = 20;
    int c = 30;

    cout << b + c << endl;

    /*  Bileşik Atama Operatörü:
    Atanan bir değeri var olan bir değişken ile gerekli koşulda birleştirirek bir sonuç elde eder.  */

    int d = 100;
    
    d+=50; // d+50 = sonucunu verir.

    cout << d << endl;

    /*  İlişkisel ve Karşılaştırma Operatörleri:
    Karşılaştırma yapmak için kullanılır.  
    Karşılaştırma ifadelerinde iki sonuç vardır. Sonuç doğrudur yada yanlıştır.     */

    cout << (50==50) << endl;

    cout << (10!=20) << endl;

    cout << !(20<30) << endl;
    
    /*  Mantıksal operatörler:
    Birleştirme operatörüdür. Sonucun true olması için her iki değerinde doğru olması gereklidir.   */

    cout << (5==5) && (10<20);

    cout << "\b" << endl;

    cout << (11==10) && (10<20);

    cout << "\b" << endl;

    /*  Arttırma ve Eksiltme Operatörleri:
    Değişkene tanımlanan değere arttırma veya eksiltme işlemlerini uygular. */

    int e = 11;
    
    e++;

    cout << e << endl;

    int f = 19;

    f--;

    cout << f << endl;
    
    /* Koşullu Üçlü Operatörler:
    Üç farklı değişken ile ilgili işlemler yapmaya yaramaktadır.    */

    int l,k,m;

    l = 2;

    k = 7;

    m = (l>k) ?l:k;

    cout << m << endl; 

    int x,y,z;

    x = 11;

    y = 13;

    z = (x<y) ?x:y;

    cout << z << endl; 
    
    return 0;

}