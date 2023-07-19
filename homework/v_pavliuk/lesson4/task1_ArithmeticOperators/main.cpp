// Problem1.cpp

#include <iostream>

using namespace std;

int main() {

        int a = 10;
        int b = 4;
        int c = 0; 
       
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;

        if (b != 0) {
            cout << "a / b = " << a / b << endl;
        }
        else {
            cout << "Division by zero is not allowed!" << endl;
        }

        if (c != 0) {
            cout << "a / c = " << a / c << endl;
        }
        else {
            cout << "Division by zero is not allowed!" << endl;
        }

        return 0;
    }


