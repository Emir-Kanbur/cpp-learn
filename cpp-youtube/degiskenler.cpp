#include <iostream>

using namespace std;

int main (){
    //int(tam sayılar),float(kesirli sayılar),double(kesirli sayılar),string(metin),char(karakter),bool(doğru,yanlış)

    //Bunlar değişkenlerdir her biri farklı bir durumu ve anlamı simgeler

    int tamsayi = 3;
    cout << tamsayi << endl;

    float kesir = 3.25;
    double kesir2 = 3.40;
    string metin = "emir kanbur";
    cout <<metin <<endl;
    char karakter = 'e';
    bool dogru = true;
     tamsayi = 5;
     cout <<tamsayi <<endl;
     
metin="Merhaba,Ben C++.Tanıştığımıza memnun oldum Emir";
cout <<metin <<endl;

    //int tam sayılar içindir kesirli ifadeleri tanımlayamaz ve hata verir.
    //char tek tırnak (') ile kullanılmalıdır aksi taktirde string olarak algılanır ve hata verir.
    //cout çıktı almak amacıyla kullanılır.


}