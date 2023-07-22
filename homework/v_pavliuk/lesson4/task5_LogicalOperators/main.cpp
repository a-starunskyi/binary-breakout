// Problem5.cpp

#include <iostream>

using namespace std;

    int main()
    {
        bool num1 = false;
        bool num2 = false;

        cout << "Enter the first Boolean value (0 or 1): ";
        cin >> num1;

        cout << "Enter the second Boolean value (0 or 1): ";
        cin >> num2;

        bool notNumber1 = !num1;
        bool notNumber2 = !num2;
        bool numberOneAndNumberTwo = num1 && num2;
        bool numberOneOrNumberTwo = num1 || num2;

        cout << "Result of logical NOT on the first value: " << notNumber1 << endl;
        cout << "Result of logical NOT on the second value: " << notNumber2 << endl;
        cout << "Result of logical AND on both values: " << numberOneAndNumberTwo << endl;
        cout << "Result of logical OR on both values: " << numberOneOrNumberTwo << endl;

        return 0;
    }