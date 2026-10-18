/*
Kullanıcıdan bir dikdörtgenin kısa ve uzun kenarlarını alan, 
dikdörtgenin çevresini ve alanını hesaplayarak ekrana yazdıran bir C++programı yazınız.
*/

#include <iostream>
using namespace std;

int main () {

    double kısaKenar , uzunKenar , cevre , alan;

    cout << "Dikdörtgeninn kısa kenarını giriniz: " ;
    cin >> kısaKenar;

    cout << "Dikdörtgenin uzun kenarını giriniz: " ;
    cin >> uzunKenar;

    cevre = 2*(kısaKenar + uzunKenar);
    alan = kısaKenar*uzunKenar;

    cout << "Dikdörtgenin Çevresi: " << cevre << endl;

    cout << "Dikdörtgenin Alanı: " << alan << endl;

    return 0 ;


}