#include <iostream>
using namespace std;

void topla(int sayi1, int sayi2);
void topla(int sayi1, int sayi2, int sayi3);

int main() {
    int x = 5, y = 10, z = 15;
    topla(x, y);
    topla(x, y, z);
    return 0;
}

void topla (int sayi1, int sayi2) 
{
    cout << "2 Sayının Toplamı: " << sayi1 + sayi2 << endl;
}

void topla (int sayi1, int sayi2, int sayi3) 
{
    cout << "3 Sayının Toplamı: " << sayi1 + sayi2 + sayi3 << endl;
}
