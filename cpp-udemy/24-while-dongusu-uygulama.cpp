#include <iostream>
using namespace std;

int main()
{
    // Soru:
    // Kullanıcıdan iki sayı alın. Başlangıc ve bitiş sayısı olarak adlandırın
    // Başlangıc sayısından bitiş sayısına kadar olan sayılar arasındaki tüm sayılardan 7 ile bölünebilenleri
    // ekrana çıktı olarak yazdırınız.

    // ORNEK:
    // baslangic = 12
    // bitis = 29
    // 14-21-28

    int baslangic, bitis, index;

    cout << "Baslangic degerini giriniz: ";
    cin >> baslangic;
    cout << "Bitis degerini giriniz: ";
    cin >> bitis;

    index = baslangic;

    while (index <= bitis)
    {
        //index değerini kontrol et 7 ile bölünebilir ise ekrana yazdır.

        if (index % 7 == 0 )
        {
            cout << index << "  ";
        }
        
        index++;

    }

    cout << "Program sona erdi.\n";

    return 0;

}