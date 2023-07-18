де// Problem10.cpp

#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Input values for three integers";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Your values are";
    cout << "a = " << a;
    cout << "b = " << b;
    cout << "c = " << c;
    cout << "Performing the first operation: \n";
    int opOne = a * b + c;
        cout << a << " * " << b << " + " << c << " = " << opOne;
        cout << "Performing the second operation: \n";
        double opTwo = b / c - a;
    cout << b << " / " << c << " - " << a << " = " << opTwo;
    cout << "Performing the third operation: \n";
    int opThree = c * a % b;
    cout << c << " * " << a << " % " << b << " = " << opThree;
  

    return 0;
}
