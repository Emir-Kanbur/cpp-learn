
//Oynatma listesindeki 5.video |  Ders-4 (Sabitler, CONST ve DEFINE kullanımı) notları ve uygulamaları

#include <iostream> 

using namespace std;

#define ad 514

int main () {

    /*  TAM SAYI:
    -Tırnak içinde yazılmazlar.
    -Onluk tabandaki sayılar aynen yazılır.         75 //decimal
    -Sekizlik tabandaki sayılar sıfır ile başlar.   0113 //octal
    -On altılık taban için sıfır ve x ile başlar.   0x4b //hexadecimal      */

    /*  SON EK:     TÜR DEĞİŞTİRİCİLER:         75    //int
    u veya U        unsigned                    75u   //unsigned int
    l veya L        long                        75l   //long
    ll veya LL      long long                   75ul  //unsigned long & 75lu //unsigned long  */   

    /*  ONDALIKLI SAYI:

    3.14159
    6.02e23
    1.6e-19
    3.0

    Bunlar C++ ile ifade edilen ondalık basamaklı dört geçerli sayıdır. 
    İlk sayı Pi, ikinci sayı Avagadro sayısı, üçüncüsü bir elektronun elektrik yükü (çok küçük bir sayı)
    hepsi yaklaşıktır ve sonuncusu yüzer olarak ifade edilen üç sayısıdır. Nokta sayısal değişmezi.

     SON EK:         TİP:
    f veya F        Float
    l veya L        Long Double

    3.14159L //long double
    6.02e23f //float

    Kayan noktalı değişmezler için varsayılan tür double. 
    Float veya türündeki kayan nokta değişmezleri long double yukarıdaki son eklerden biri belirtilerek eklenir.  */

    cout << 75 << " " << 0113 << " " << 0x4b << endl;

    cout << 3.14159 << " " << 602e23 << endl;

    /* KARAKTERLER VE DİZELER
    Anahtar sözcük ve değişkenden farklı olması için tırnak kullanılır.
    Tek tırnak, tek harf için 
    Çift tırnak, harf dizesi için
    Özel karakterlerin kullanımı
    Çift tırnak birleştirme    
    
    \n  yeni satır
    \r  geri alma 
    \t  sekme
    \b  boşluk
    \a  uyarı (bip)
    \'  tek alıntı(')
    \"" çift tırnak ("")
    \?  soru işareti(?)
    \\  ters eğik çizgi    */

    cout << 'A' << "AA" << endl;

    cout << 'A' << "\nAA" << endl;

    /*  Diğer Sabitler:
    bool foo = true;
    bool bar = false;
    int*p = nullptr;     */

    /* Tanımlı Sabitler:
    Const Tanımlama
        const double pi = 3.1415926;
        const char tab = '\t';
        Daha sonra tanımlandıkları değişmezler yerine bu adları kullanabiliriz.
        
    Ön Işlemci Tanımları (#define)
    #define identifier replacement
    Bu değiştirme ön işlemci tarafından gerçekleştirilir ve program derlenmeden önce gerçekleşir.   */

    const double pi = 3.141592;

    cout << 3*pi << endl;

    cout << pi * ad << endl;


    return 0;

}