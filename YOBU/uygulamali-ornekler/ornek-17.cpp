/*
 Bir öğrencinin not ortalamasını kullanarak harf notunu belirleyen aşağıdaki kod parçasında hata var mı?
    Eğer varsa, hatayı düzeltin.
 int ortalama = 78;
 
 if (ortalama >= 90)
 cout << "A";
 
 else if (ortalama >= 80)
 cout << "B";
 
 else if (ortalama >= 70)
 cout << "C";
 
 else
 cout << "D";
*/

//kod akışı ve girdiler düzgün herhangi bir hata yok.

#include <iostream>
using namespace std;

int main () {

    int ortalama=78;

    if (ortalama >= 90)
        cout << "Harf Notunuz: A" << endl;
    
    else if (ortalama >= 80)
        cout << "Harf Notunuz: B" << endl;

    else if (ortalama >= 70)
        cout << "Harf Notunuz: C" << endl;

    else 

        cout << "Harf Notunuz: D" << endl;
    

    return 0;

}