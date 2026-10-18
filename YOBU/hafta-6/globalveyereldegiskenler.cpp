#include <iostream>
using namespace std;        

int globalVar = 10; // Global variable  

void modifyVariables() {
    int localVar = 5; // Local variable
    cout << "Inside modifyVariables function:" << endl;
    cout << "Local variable before modification: " << localVar << endl;
    cout << "Global variable before modification: " << globalVar << endl;

    localVar += 10; // Modify local variable
    globalVar += 20; // Modify global variable

    cout << "Local variable after modification: " << localVar << endl;
    cout << "Global variable after modification: " << globalVar << endl;
}

int main() {
    cout << "In main function before calling modifyVariables:" << endl;
    cout << "Global variable: " << globalVar << endl;

    modifyVariables(); // Call the function to modify variables

    cout << "In main function after calling modifyVariables:" << endl;
    cout << "Global variable: " << globalVar << endl;

    return 0;
}
