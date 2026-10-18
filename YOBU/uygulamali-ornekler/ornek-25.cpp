/*
Aşağıdaki kod parçasında bir öğrencinin notlarına 
göre sınıf geçme durumu belirlenmektedir. Ancak 
kodda bazı hatalar bulunmaktadır. Bu hataları bulun 
ve düzeltin:
    int not1 = 85, not2 = 90, not3 = 75;
    double ort = (not1 + not2 + not3) / 2;

    if (ort >= 85)
    cout << "Yüksek Geçtiniz";
    else if (ort >= 70 && ort < 85)
    cout << "Geçtiniz";
    else
    cout << "Kaldınız";
*/

// Ortalama 3'e bölünmesi gerekiyor. 3 adet not var ancak toplam 2'ye bölünmüş

#include <iostream>
using namespace std;

int main () {
    
    int not1=85 , not2=90 , not3=75;
    double ort = (not1 + not2 + not3) / 3.0;

    if (ort >= 85)
        cout << "Yüksek Geçtiniz." << endl;
    else if (ort >=70 && ort <85)
        cout << "Geçtiniz" << endl;
    else 
        cout << "Kaldınız" << endl;

    return 0;

}