#include <iostream>
#include <cmath>
using namespace std;

void topla (float sayi1 , float sayi2){
 
    cout << " Toplam Sonucu: " << sayi1 + sayi2;

}

void cikar (float sayi1 , float sayi2){
 
    cout << " Çikarma Sonucu: " << sayi1 - sayi2;
    
}

void carpma (float sayi1 , float sayi2){
 
    cout << " Carpim Sonucu: " << sayi1 * sayi2;
    
}
void bolme (float sayi1 , float sayi2){
    
    if (sayi2==0) { 

        cout << " Bolen 0 olamaz " ;
    }
    else {

        cout << "Bolen Sonucu" << sayi1 / sayi2;
    }

}

void modAlma (float sayi1 , float sayi2) {
    if (sayi2 == 0.0f) {
        cout << "Bolen 0 olamaz ";
    }
    else {
        cout << "Mod Değeri: " << fmod(sayi1, sayi2);
    }
}

int main () {

    cout << " Yapmak istediginiz islemi seciniz." << endl;
    cout << "1-Toplama 2-Cikarma 3-Carpma 4-Bolme 5-Mod " << endl;

    int islem;
    float x;
    float y;
    cin >> islem;

    cout << " Birinci sayiyi girin: " ;
    cin >> x;

    cout << "Ikinci sayiyi girin: " ;
    cin >> y;

    switch (islem) {
        case 1:
        topla (x,y);
        break;

        case 2:
        cikar (x,y);
        break;

        case 3:
        carpma (x,y);
        break;

        case 4:
        bolme (x,y);
        break;

        case 5:
        modAlma (x,y);
        break;

        default:
        cout << "Yanlis islem yaptiniz. " << endl;
    }
    return 0;
}