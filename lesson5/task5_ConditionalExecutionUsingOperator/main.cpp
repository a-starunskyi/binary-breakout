// Problem: Write a program that displays "Odd" for odd numbers and "Even" for even numbers using the ternary operator.

#include <iostream>
using namespace std;

int main()
{
    cout << "This program displays Odd and Even numbers from greater number" << endl;
    cout << "Enter two numbers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    // Using the ternary operator ?
    int max = (num1 > num2) ? num1 : num2;  // max contains greater of num1 and num2                         
    cout << "The greater of " << num1 << " and " << num2 << " is: " << max << endl;

    // Check if the greater number is odd or even using the ternary operator
    string result = (max % 2 == 0) ? "Even" : "Odd";
    cout << "The greater number is: " << result << endl;


    // TODO: Take input from the user

    // TODO: Implement the ?: operator to determine and display if it's even or odd

    return 0;
}
