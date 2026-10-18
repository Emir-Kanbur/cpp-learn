#include <iostream>
using namespace std;

int main() {  
    int x = 2;
    int prefix = ++x;
    int postfix = x++;
    int y = prefix * postfix;
    cout << x << " , " << y;
    
    return 0;
}