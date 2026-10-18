//kare matris 4-4'lük kullanıcı dolduruyor.
//ikinci bir dizi kullanmadan transpozunu alın.

#include <iostream>
using namespace std;

int temp;

int main () {

    int matris[4][4];

        for (int i=0; i<4; i++)
        {
            for (int j = 0; j<4; j++)
            {
                cout << " Matris için gerekli sayilari giriniz: ";

                cin >> matris [i][j];

            }
            cout << "Matris: " << endl;
        }
        for (int i=0; i<4; i++)
        {
        for (int j = 0; j<4; j++)
            {
                cout << " " << matris[i][j] << " " ;
            }
                cout << endl;
        }


        for (int i=0; i<4; i++)
        {
            for (int j = i++; j<4; j++)
            {
                temp = matris[i][j];
                matris[i][j] = matris[j][i];
                matris[j][i] = temp;
            }
        }

        cout << "Transpoz Matris: " << endl;
        for (int i=0; i<4; i++)
        {
            for (int j = 0; j<4; j++)
            {
                cout << " " << matris[i][j] << " " ;
            }
            cout << endl;
        }
    return 0;

}
