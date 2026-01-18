#include <iostream>

using namespace std;

int main() 
{
    string isim; //tanımlama
    isim = "Udemy "; // atama

    string number;
    number = "5 yil";
       
    cout << "Degiskenler dersine hoş geldiniz. " << endl << "Bu ders videosu 3 yil önce çekildi" << endl << "\n";

    cout << isim << " dersine hos geldiniz. " << endl << "Bu ders videosu " << number << " once cekildi" << endl << "\n";

   /*
      Değişkenlerde dikkat edilmesi gerekenler: (OLAMAZ)
    - Degiskenlerin basina rakam koyamazsin. (Kesinlikle)
    - Değişkenlerde türkçe karakter olamaz.
    - Değişkenlerin isimlerinde arada boşluk olamaz.
    - Değişkenlerin isimlerinde arada nokta vb. karakterler olamaz.
    */

    /* 
      Değişkenlerde dikkat edilmesi gerekenler:
    - camelCase standardına uyum gösterebilirsin
    - ilk kelime küçük ikinci kelime sadece baş harfi büyük
    - farklı standartlarda vardır.
    - kelimeler arasına _ getirilerek de yazılabilir.
    - Bu tarz yazımlar okunabilirliği arttırır. Artık global çapta bu şekildedir.
    */
    return 0;

}