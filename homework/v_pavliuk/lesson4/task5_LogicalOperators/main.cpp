// Problem5.cpp

#include <iostream>

using namespace std;

    int main()
    {
        bool num1, num2;

        cout << "Enter the first Boolean value (0 or 1): ";
        cin >> num1;

        cout << "Enter the second Boolean value (0 or 1): ";
        cin >> num2;

        bool result1 = !num1;
        bool result2 = num1 && num2;
        bool result3 = num1 || num2;

        cout << "Result of logical NOT on the first value: " << result1 << endl;
        cout << "Result of logical AND on both values: " << result2 << endl;
        cout << "Result of logical OR on both values: " << result3 << endl;

        return 0;
    }