#include <iostream>
using namespace std;

int main () {

     int boyut = 10;
     int notlar [boyut];    //tanımlanmış değer de atanabilir.

     for (int i = 0; i<boyut; i++) 
     {
        cout << "Vize notlarını giriniz: ";
        cin >> notlar[i];
     }
     
     double toplam = 0;

        cout << "------Girilen vize notları ------" << endl;

     for (int i = 0; i<boyut; i++)
     {
        cout << notlar[i] << endl;
        toplam += notlar[i];
        
     }
     
     double ortalama = toplam / boyut;

     cout << "Girilen vizelerin ortalaması: " << ortalama << endl;

    return 0;

}
