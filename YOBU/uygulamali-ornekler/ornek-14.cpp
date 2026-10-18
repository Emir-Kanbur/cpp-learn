/* 
Kullanıcıdan bir öğrencinin 4 yanlış cevabın 1 doğru cevabı götürdüğü sınavda yaptığı doğru ve yanlış sayılarını alarak 
öğrencinin netini hesaplayan bir C++ programı yazınız.
*/

#include <iostream>
using namespace std;

int main () {

    int dogru, yanlis;
    
    double net;

    cout << "Sınavdaki doğru cevapladığınız soru sayısı: " ;
    cin >> dogru;

    cout << "Sınavdaki yanlış cevapladığınız soru sayısı: " ;
    cin >> yanlis;

    net = dogru - (yanlis / 4.0);

    cout << "Sınavdaki netiniz: " << net << endl;

    return 0;

} 