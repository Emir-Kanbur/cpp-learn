/* C++ TAMAMLAYICI KOD YAZMA EGZERSİZİ / PROBLEMİ

    Kullanıcıdan 3 adet sınav  notu alınız (Sınav notları tamsayı şeklinde olmalı)
    Daha sonra bu notların ortalamasını bulup ekrana aşağıdaki gibi 2 şekilde yazdırın.

    I) double olarak küsüratlı (noktadan sonra 2 digit hassasiyet olsun)
    II) Sonucu tam sayı olarak yazdırsın, yuvarlama yapılabilir, mesela not 84.5 => 85 veya 84.49 => 84 şeklinde

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int not1, not2, not3;

    cout << "1.Sinav notunu giriniz: ";
    cin >> not1;
    cout << "2.Sinav notunu giriniz: ";
    cin >> not2;
    cout << "3.Sinav notunu giriniz: ";
    cin >> not3;

    double notOrtalama = (double) (not1+not2+not3)/3.0;

    cout << "Notlarin Ortalamasi (1.Secenek): " << fixed << setprecision(2) << notOrtalama << endl;

    int sonuc = (int) round (notOrtalama);
    cout << "Notlarin Ortalamasi (2.Secenek): " << sonuc << endl;

    return 0;

}