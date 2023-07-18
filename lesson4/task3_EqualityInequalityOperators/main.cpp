// Problem3.cpp

#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    cout << "Input value for integer a = ";
    cin >> a;
    cout << "Input value for Integer b";
    cin >> b;
    bool equality = (a == b);
    bool inequality = (a != b);
    cout << "Integer a is equal to integer b" << equality;
    cout << "Integer a is inequal to integer b" << inequality;
   

    return 0;
}
