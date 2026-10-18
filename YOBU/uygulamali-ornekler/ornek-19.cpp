/*
Aşağıdaki kod parçasının çıktısı nedir?
 int yas = 16;
 string durum = (yas >= 18) ? "Yetişkin" : "Çocuk";
 cout << durum;
*/

#include <iostream>
using namespace std;

int main () {

    int yas=16;

    string durum = (yas >= 18) ? "Yetişkin" : "Çocuk";

        cout << durum;

    return 0;

}