/*
Bir şehirdeki trafik sistemi, sürücülerin hız limitlerine uymalarını kontrol eden otomatik kamera sistemleriyle donatılmıştır. 
Eğer bir sürücü hız limitini aşarsa, otomatik olarak bir ceza kesilir. 
Ancak bu sistem, bazı özel durumları da göz önünde bulundurur.
Normal bir günde, hız limiti 100 km/sa'dir. 
Eğer bir sürücü bu hızın %10 üzerine çıkarsa, 100 TL ceza kesilir. 
%20 üzerine çıkarsa, 300 TL ceza kesilir. %30 ve üzeri bir aşma durumunda, sürücünün ehliyetine 6 ay süreyle el konulur.
Ancak şehirdeki okulların açık olduğu günlerde, okul önlerindeki hız limiti 50 km/sa'dır. 
Burada %10 üzerine çıkılması durumunda 200 TL, %20 üzerine çıkılması durumunda 500 TL ceza kesilir. 
%30 ve üzeri bir aşma durumunda, sürücünün ehliyetine 1 yıl süreyle el konulur.
Sürücünün hızını, hangi bölgede (normal veya okul önü) olduğunu ve okulların açık olup olmadığını alarak sonucu belirleyin.
*/

#include <iostream>
using namespace std;

int main () {
    int hiz;
    string bolge , okulDurumu;

    cout << "Sürücünün hızını giriniz: ";
    cin >> hiz;

    cout << "Sürücü hangi bölgede? (normal/okul_onu) : ";
    cin >> bolge;

    cout << "Okullar açık mı (Evet/Hayır): ";
    cin >> okulDurumu;

    if (bolge == "normal") {
        if (hiz > 110 && hiz <=120) {
            cout << "100 TL trafik cezası kesilmiştir." << endl;
        }
        else if (hiz > 120 && hiz <=130) {
            cout << "300 TL trafik cezası kesilmiştir. " << endl;
        }
        else if (hiz > 130) {
            cout << "Ehliyetinize 6 ay süreyle el koyulmuştur. " << endl;
        }
    }
    else if (bolge == "okul_onu" && okulDurumu == "evet") {
        if (hiz > 55 && hiz <= 60) {
            cout << "200 TL trafik cezası kesilmiştir." << endl;
        }
        else if (hiz > 60 && hiz <=65) {
            cout << "500 TL trafik cezası kesilmiştir." << endl;
        }
        else if (hiz >65){
            cout << "Ehliyetinize 1 yıl süreyle el koyulmuştur. " << endl;
        }
    }

    return 0;
}