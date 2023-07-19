// Problem4.cpp

#include <iostream>

using namespace std;

int main() 
{
        int num1, num2, num3;

        cout << "Enter the first integer: ";
        cin >> num1;

        cout << "Enter the second integer: ";
        cin >> num2;

        cout << "Enter the third integer: ";
        cin >> num3;

        int largest = num1;
        int smallest = num1;

        if (num2 > largest) {
            largest = num2;
        }

        if (num3 > largest) {
            largest = num3;
        }

        if (num2 < smallest) {
            smallest = num2;
        }

        if (num3 < smallest) {
            smallest = num3;
        }
        cout << "The largest number is: " << largest << endl;
        cout << "The smallest number is: " << smallest << endl;

        return 0;
 }

