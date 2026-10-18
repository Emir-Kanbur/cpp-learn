#include <iostream>
using namespace std;

int main () {

    //3x3'lük bir iki boyutlu dizi tanımlama

    int matris [3][3] ={

        {1,2,3},
        {4,5,6},
        {7,8,9} 
    };

    int toplam = 0;
    for (int i = 0; i <3; i++)  //satırlar için
    {
        for (int j=0; j<3; j++) //sütunlar için
        {
            toplam+=matris [i][j];
        }
    }
    cout << "Matrislerin Toplami: " << toplam << endl;
    return 0;
}
