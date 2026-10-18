
//Oynatma listesindeki 4.video |  Ders-3 (Değişkenler ve Kullanım Örnekleri) notları ve uygulamaları

#include <iostream> 

using namespace std;

int main() {

    /* Değişken isimlendirirken ingiliz alfabesi baz alınır. Türkçe harfler kullanılmaz. 
       Değişken iki farklı ayrı kelime olarak tanımlanamaz. Bitişik olarak yazılmalıdır. */

       int yas=15;

       /* Eşittir ifadesi değişkene sağdaki ifadeyi soldakine yani değişkene aktarmak için kullanılır. 
       Matematiksel olarak kullanıldığı anlamda değildir. */

       double fiyat=19.99;

       double sonuc=2.5;

       /*double operatörü int operatöründen farklı olarak ondalıklı ifadeyi de tutuyor. 
       int operatörü sadece tam sayı formatındakileri tutabiliyor ondalıklı değerleri tanımlayamıyor. */

       char kr='A';

       /*char operatörü sadece tek karakter bilgisi tutmak için kullanılır. 
       karakteri ifade eden kr değişken adı verebiliriz. Karakterler tek tırnak ile ifade edilir.*/

       string metin ="metinsel ifadeler.";

       /*Arka arkaya dizilmiş bir tür küme gibi düşünebiliriz. 
       Metinsel ifadelerde kullanılır. Çift tırnak ile belirtilir*/

       bool tf =true;

       /*true ve false ifadelerini içeren bir değişkendir. Doğru / Yanlış mantığındadır. 
       İçerisinde iki bilgi tutar doğru ya da yanlıştır ek olarak 0 ve 1 değerlerini de tutmaktadır.*/

       cout << yas << endl; 

       cout << fiyat << endl;

       cout << sonuc << endl;

       cout << kr << endl;

       cout << metin << endl;

       cout << tf << endl;

       return 0;
       
}