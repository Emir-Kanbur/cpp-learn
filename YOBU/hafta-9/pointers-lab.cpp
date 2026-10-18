#include <iostream>
using namespace std;

void puanEkle (int*ptr, int boyut, int ekPuan)
{
    for (int i=0; i<boyut; i++)
    {
        ptr[i] = ptr[i] + ekPuan;
    }
}

void analizYap (int*ptr, int boyut, int*max, int*min)
{
    *min = ptr[0];
    *max = ptr[0];
    for (int i = 0; i<boyut; i++)
    {
        if (ptr[i] < *min)
        {
            *min = ptr[i];
        }
        if (ptr[i] > *max)
        {
            *max = ptr[i];
        }
    }
}

int main() {

    int notlar [5] = {50,60,40,90,70};
    int enDusuk, enBuyuk;
    puanEkle (notlar, 5, 10);

    analizYap (notlar, 5, &enBuyuk, &enDusuk);

    cout << "En Dusuk: " << enDusuk << endl;

    cout << "En Buyuk: " << enBuyuk << endl;

    return 0;
}