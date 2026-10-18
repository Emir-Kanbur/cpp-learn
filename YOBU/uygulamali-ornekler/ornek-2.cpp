/*
Sayfa 12'deki örnek yapılacak.
10 öğrencinin tek tek notları alınacak ve ortalama hesaplanacak bunu nasıl yaparsın?
*/

/* 
Bu örnek tüm öğrencilerin notlarının alındıktan sonrada hesaplanabilir yani soru yoruma açıktır.
*/

// YORUMLARIM:
// Vizelere kadar döngü kullanmayı öğrenmedik bu sebepten ötürü uzun yoldan tek tek alınarak yapılabilir.


// Bu örnek tüm öğrencilerin verileri alınıp ardından işlemler yapılmıştır. Dolayısı ile 2. yöntem uygulandı.

/*
SET toplam = 0
 SET sayac = 1
 WHILE sayac <= 10 DO
 READ ogrencininNotu
 COMPUTE toplam = toplam + ogrencininNotu
 COMPUTE sayac = sayac + 1
 ENDWHILE
 COMPUTE ortalama = toplam / 10
 PRINT ortalama
*/
#include <iostream>

using namespace std;

int main () {

     //her kişi için ayrı atama yaparsam çözebilirim. Ancak optimize değil.

    int a,b,c,d,e,f,g,h,k,l,toplam,ortalama;

    cout << "Lütfen 1.öğrencinin notunu giriniz: " ;

    cin >> a;

    cout << "Lütfen 2.öğrencinin notunu giriniz: ";

    cin >> b;

    cout << "Lütfen 3. öğrencinin notunu giriniz: " ;

    cin >> c;

    cout << "Lütfen 4.öğrencinin notunu giriniz: ";

    cin >> d;

    cout << "Lütfen 5.öğrencinin notunu giriniz: " ;

    cin >> e;

    cout << "Lütfen 6. öğrencinin notunu giriniz: ";

    cin >> f;
    
    cout << "Lütfen 7.öğrencinin notunu giriniz: " ;

    cin >> g;

    cout << "Lütfen 8. öğrencinin notunu giriniz: ";

    cin >> h;

    cout << "Lütfen 9.öğrencinin notunu giriniz: " ;

    cin >> k;

    cout << "Lütfen 10.öğrencinin notunu giriniz: ";

    cin >> l;

    toplam = a+b+c+d+e+f+g+h+k+l;

    ortalama = toplam/10;

    cout << "10 Ogrencinin Not Ortalamasi : " << ortalama << endl;

    return 0;

}
