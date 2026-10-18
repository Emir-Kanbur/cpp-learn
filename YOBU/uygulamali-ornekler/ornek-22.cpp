/*
Aşağıda bir öğrencinin aldığı dersler ve bu derslere ait not ortalamaları verilmiştir:
    Matematik: 85
    Fizik: 70
    Kimya: 92
    Biyoloji: 78
Eğer bir öğrencinin herhangi bir dersten notu 50'nin altındaysa "Başarısız" olarak kabul edilir. 
Eğer tüm derslerden notu 85 ve üzeriyse "Mükemmel" olarak kabul edilir.
Diğer durumlarda "Başarılı" olarak kabul edilir. 
Bu bilgilere göre öğrencinin durumunu ekrana yazdıran kodu yazın.
*/

#include <iostream>
using namespace std;

int main () {

    int matematik=85 , fizik=70 , kimya=92 , biyoloji=78;

    if (matematik < 50 | fizik < 50 | kimya < 50 | biyoloji < 50)
        cout << "Başarısız" << endl;
    
    else if (matematik > 85 | fizik > 85 | kimya > 85 | biyoloji > 85)
        cout << "Mükemmel" << endl;

    else 
        cout << "Başarılı" << endl;

    return 0;
}

    