#include <iostream>
using namespace std;

//    BÖLÜM-2: Fonksiyonların prototiplerini main üstüne yazdım. 

float ortalamaHesapla(int notlar[], int n);
int enYuksekNot(int notlar[], int n);
int enDusukNot(int notlar[], int n);
int gecenOgrenciSayisi(int notlar[], int n);
int ortalamaninUstundekiler(int notlar[], int n); // Bonus kısım için ekstra olarak tanımladım.

int main() {
    /*
        BÖLÜM-1: Girdi Alma işlemleri.
        Sınıf mevcudu en fazla 50 olacağı için diziyi 50'lik açtım.
        Ödevde 'vector kullanılmayacaktır' dendiği için standart dizi kullandım.
    */
    int notlar[50]; 
    int ogrenciSayisi;
    
    // Do-while döngüsü kullandım çünkü koşul sağlanana kadar en az bir kere sorması lazım

    do {
        cout << "Ogrenci sayisini giriniz (1-50): ";
        cin >> ogrenciSayisi;

        if (ogrenciSayisi < 1 || ogrenciSayisi > 50) {
            cout << "Hata! Lutfen 1 ile 50 arasinda bir sayi giriniz." << endl;
        }
    } while (ogrenciSayisi < 1 || ogrenciSayisi > 50);

    // 2. ve 3. Adım: Notları kullanıcıdan alacağız ve kontrolünü yapacağız.

    cout << "\n" << ogrenciSayisi << " ogrenci icin notlari giriniz:" << endl;
    
    // Her öğrenci için kullanıcıdan tek tek not isteyeceğiz

    for (int i = 0; i < ogrenciSayisi; i++) {
        do {
            cout << (i + 1) << ". Ogrencinin Notu: ";
            cin >> notlar[i];

            if (notlar[i] < 0 || notlar[i] > 100) {
                cout << "Gecersiz not! Lutfen 0-100 arasinda giriniz." << endl;
            }
        } while (notlar[i] < 0 || notlar[i] > 100);
    }

    /*
        BÖLÜM-4: Menü İşlemleri
        While döngüsü ile kullanıcı '0' girene kadar menü tekrar tekrar gelecek.
    */

    int secim;
    bool devam = true;

    while (devam) {
        cout << "\n--- MENU ---" << endl;
        cout << "1- Notlari Listele" << endl;
        cout << "2- Ortalama Hesapla" << endl;
        cout << "3- En Yuksek Not" << endl;
        cout << "4- En Dusuk Not" << endl;
        cout << "5- Gecen Ogrenci Sayisi" << endl;
        cout << "6- Ortalamnin Ustundeki Ogrenci Sayisi (BONUS)" << endl;
        cout << "0- Cikis" << endl;
        cout << "Seciminiz: ";
        cin >> secim;

        cout << "\n----------------------------" << endl;
        
        // Switch-case yapısı ile menü seçimini yönetiyorum

        switch (secim) {
            case 1:
                cout << "Notlar: ";
                for (int i = 0; i < ogrenciSayisi; i++) {
                    cout << notlar[i] << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Sinif Ortalamasi: " << ortalamaHesapla(notlar, ogrenciSayisi) << endl;
                break;
            case 3:
                cout << "En Yuksek Not: " << enYuksekNot(notlar, ogrenciSayisi) << endl;
                break;
            case 4:
                cout << "En Dusuk Not: " << enDusukNot(notlar, ogrenciSayisi) << endl;
                break;
            case 5:
                cout << "Gecen Ogrenci Sayisi (60 ve uzeri): " << gecenOgrenciSayisi(notlar, ogrenciSayisi) << endl;
                break;
            case 6:
                // Bonus fonksiyonunu çağırdım
                cout << "Ortalamanin ustundeki ogrenci sayisi: " << ortalamaninUstundekiler(notlar, ogrenciSayisi) << endl;
                break;
            case 0:
                cout << "Programdan cikiliyor." << endl;
                devam = false;
                break;
            default:
                cout << "Hatali secim yaptiniz, tekrar deneyin." << endl;
        }
        cout << "----------------------------\n" << endl;
    }

    return 0;
}

// Fonksiyonların İçerikleri (Gövdeleri) 

// Ortalama ondalıklı olabileceği için float kullandım.

float ortalamaHesapla(int notlar[], int n) {
    float toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += notlar[i];
    }
    return toplam / n;
}

// Notları karşılaştırıyorum. Hangisi büyük ise onu seçecek.

int enYuksekNot(int notlar[], int n) {
    int enYuksek = notlar[0]; 
    for (int i = 1; i < n; i++) {
        if (notlar[i] > enYuksek) {
            enYuksek = notlar[i];
        }
    }
    return enYuksek;
}
// Notları karşılaştırıyorum. Hangisi küçük ise onu seçecek.
int enDusukNot(int notlar[], int n) {
    int enDusuk = notlar[0]; 
    for (int i = 1; i < n; i++) {
        if (notlar[i] < enDusuk) {
            enDusuk = notlar[i];
        }
    }
    return enDusuk;
}

// BÖLÜM-3: Artırma (++) operatörünü ekliyorum
int gecenOgrenciSayisi(int notlar[], int n) {
    int sayac = 0;
    for (int i = 0; i < n; i++) {
        if (notlar[i] >= 60) {
            sayac++; // Not 60 ve üzeriyse sayaç bir artacak.
        }
    }
    return sayac;
}

// BONUS: Ortalamanın üstündekileri sayan fonksiyon
int ortalamaninUstundekiler(int notlar[], int n) {
    float ort = ortalamaHesapla(notlar, n);
    int sayac = 0;
    
    for(int i = 0; i < n; i++) {
        // Eğer not ortalamadan büyükse sayacı artır
        if(notlar[i] > ort) {
            sayac++;
        }
    }
    return sayac;
}
