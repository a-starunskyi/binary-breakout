// Problem: Write a program that takes two numbers from the user and displays which one is greater.
// Conditional Execution Using if ... else: Write a program that takes two numbers from the userand displays which one is greater.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0; // Initializate
    int num2 = 0;
    cin >> num1; // Enter the number from user
    cin >> num2;

    int result = 0;
    if (num1 > num2)
    {
        result = num1;
    }
    else if (num1 < num2)
    {
        result = num2;
    }
    else
    {
        result = num1 = num2;
        cout << "Both numbers are equal" << endl;
    }

    cout << "The greatest number is: " << result << endl;

    return 0;
}

// TODO: Take input from the user

// TODO: Implement the if ... else logic to determine and display the greater number


