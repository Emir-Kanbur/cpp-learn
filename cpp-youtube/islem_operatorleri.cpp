#include <iostream>

using namespace std;

int main (){

    //+(Toplama),-(Çıkarma),*(Çarpma),/(Bölme)

//Toplama işlemine örnek bir çalışma:

int degisken1 = 58;
int degisken2 = 67;
int degisken3 = 92;
int sonuc;

sonuc = degisken1 + degisken2 + degisken3;

cout<<"Toplam:"<<sonuc<<endl;

//Çıkarma işlemine örnek bir çalışma:

int formül1 = 98;
int moral2 = 967;
int gelenek;

gelenek = moral2 - formül1;

cout<<"Çıkarma:"<<gelenek<<endl;

//Çarpma işlemine örnek bir çalışma:

int satır32 = 7.;
int satır33 = 2;
int islem;

islem = satır32 * satır33;

cout<<"Çarpım:"<<islem<<endl;

//Bölmw işlemine örnek bir çalışma:

int satır42 = 37;
int satır43 = 74;
int kestirme;

kestirme = satır43 / satır42;

cout<<"Bölüm:"<<kestirme<<endl;

// İşlem operatörleri sadece dört işlem olarak kullanılmaz.Harflerde,kelimelerde ve hatta cümlelerde kullanılabilmektedir.

string metin1 , metin2 ,sonucMETİN;
metin1 = "Emir";
metin2 = "Kanbur";

sonucMETİN = metin1 +" "+ metin2;

cout<<sonucMETİN<<endl;

}