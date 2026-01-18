#include <iostream>

using namespace std;

int main () 
{
    string isim = "Emir Kanbur";
    int dogumYili = 2006;
    float sayisalNotOrtalamasi = 3.27;
    double pi = 3.14159265358979323846264;
    bool sinifiGectiMi = true;
    char harfNotOrtalamasi = 'A';
    float quizNot = 72.f;
    float quizNot2 = 51;
    float quizOrtalama = (quizNot+quizNot2) / 2;

    cout << "Merhaba: " << isim << endl;
    cout << "Doğum Yili: " << dogumYili << endl;
    cout << "Not Ortalamasi " << sayisalNotOrtalamasi << endl;
    cout << "Pi Sayisi " << pi << endl;
    cout << "Sinifi geçti mi? " << sinifiGectiMi << endl;
    cout << "Not Ortalamasi: " << harfNotOrtalamasi << endl;
    cout << "Quiz Ortalamasi: " << quizOrtalama << endl;

    int x=10;
    int y=20;
    int z=12 % 2; //mod (modulus) operatoru
    
    cout << z << endl;

    // bool true ise 1, false ise 0 döndürür.
    // char veri tipi harf yazarsan tırnak içinde, sayı yazarsan ise ASCII tablosundaki değerleri yansıtır.


    return 0;
}