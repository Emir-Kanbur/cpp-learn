// Kod çalışmıyor hata var tekrar kontrol edilecek. 05-11-2025
#include <iostream>

using namespace std;

int main () {

    /* 
    vize sınavı %40
    odev ve performans %10
    final sınavı %50
    */

    int vizeNotu, odevNotu, finalNotu;

    cout << "Vize notunu giriniz:";

    cin >> vizeNotu;

    cout << "Odev notunu giriniz:";

    cin >> odevNotu;

    cout << "Final notunu giriniz:";

    cin >> finalNotu;

    if (finalNotu<50)  {

        cout << "Dersten Kaldiniz." << endl;

    }

        int ortalama = 0.4*vizeNotu+0.1*odevNotu+0.5*finalNotu;

        cout << "Not Ortalamaniz: " << ortalama << endl;

    if (ortalama>=90) {

        cout << "Harf Notunuz: AA";
    }
    else if (ortalama>=80) {

        cout << "Harf Notunuz: BA";
    }
    else if (ortalama>=70) {

        cout << "Harf Notunuz: BB";
     }
    else if (ortalama>=60) {

        cout << "Harf Notunuz: CB";
     }
    else if (ortalama>=50){

        cout << "Harf Notunuz: CC";
    }
    else {

        cout << "Harf Notunuz: FF";

    }

    cout << "  Ortalamaniz: " << ortalama  << endl;
    
    return 0;
}