/*     
    2. Görev – 3 Sayıyı Küçükten Büyüğe Sıralama
    Emir Kanbur

    Açıklama: Referans parametreleri kullanılarak 3 tam sayıyı küçükten büyüğe sıralayan program.
*/
// Referans parametre kullanarak 3 sayıyı küçükten büyüğe sıralayınız. 
// Bu fonksiyonun içinde dizi kullanmak yasaktır.

#include <iostream> 
using namespace std;

void sort3(int &a, int &b, int &c) {

    int geciciAlan;

    if (a > b) {
        geciciAlan = a;
        a=b;
        b=geciciAlan;
    }

    if (a > c) {
        geciciAlan =a;
        a=c;
        c=geciciAlan;
    }

    if (b > c) {
        geciciAlan = b;
        b=c;
        c=geciciAlan;
    } 
}
    int main () {
        int sayi1, sayi2, sayi3;

        cout << "Birinci sayıyı giriniz: ";
        cin >> sayi1;

        cout << "ikinci sayıyı giriniz: ";
        cin >> sayi2;

        cout << "Üçüncü sayıyı giriniz: ";
        cin >> sayi3;

        sort3 (sayi1, sayi2 , sayi3);

        cout << "Sayıların küçükten büyüğe sıralanmış hali: " << sayi1 << " " << sayi2 << " " << sayi3 << endl;

        return 0;
    
    }
