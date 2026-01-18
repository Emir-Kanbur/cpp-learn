#include <iostream>

using namespace std;

int main(){

    //continue = O terimi atlar bir sonraki terime geçilmesini sağlar.

    for (int i = 0; i<5;i++) {

        if(i==3) {

            continue;
        }

    cout<< i << endl;
 
    }

    int h = 10;

    while (h<50) {

        if (h==35) {

            continue;

        }

        h++;

    cout<<h<<endl;

    }
}