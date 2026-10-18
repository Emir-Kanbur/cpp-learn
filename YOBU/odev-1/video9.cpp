//Oynatma listesindeki 9.video |  Ders-8 C++ Uygulama Örnekleri(Tek Sayıyı Bulma, İkili Şart) notları ve uygulamaları

/*  SORU-1:
Klavyeden girilen bir sayının tek mi yoksa çift mi olduğunu bulan bir programı C++ ile yazın.
*/

#include <iostream>

using namespace std;

int main (){

 // DEĞİŞKENLERE MUTLAKA DÜZGÜN İSİMLER VER BU İLERLEYEN AŞAMALARDA ÇOK ÖNEMLİ HALE GELEBİLMEKTE..

    int sayi;

    cout << "Bir sayi giriniz:" << endl;
    
    cin >> sayi;

    if (sayi%2==0)
        
    cout << "Girdiginiz sayi cifttir." << endl;

    //Bölüm işareti (/) işlemin sonucunu verir. Mod ise (%) kalan değeri verir.

    //Bilgisayar ilkel bir işletim sistemi ona yapmasını istediğin her şeyi söylemen gerekli.

    else 

    cout << "Girdiginiz sayi tektir." << endl;

/*  SORU-2:
Cinsiyet ve yaş bilgisi klavyeden girilen kişinin askere elverişlilik durumunu belirten bir program yazınız.
Program C++ dilinde yazılmalıdır.
*/

    char cinsiyet;

    int yas;

    cout << "Cinsiyetinizi Giriniz (E/K)" << endl;

    cin >> cinsiyet;

    cout << "Yasinizi Giriniz:" << endl;

    cin >> yas;

    if (yas>=18 && cinsiyet=='E') {

        cout << "Askere Gidebilirsiniz.";
    }

    else {

        cout << "Askere Gitmeye Elverişli Degilsiniz";
    }
    //cout << cinsiyet << " - " << yas << endl;

    return 0;

} 