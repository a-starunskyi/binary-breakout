// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include <iostream>
using namespace std;


int main()
{
    cout << "Enter the number: " << endl;
    int num = 0;
    cin >> num;

    if (num > 0)
    {
        cout << "This is Positive number: " << num << endl;
    }
    else if (num < 0)
    {
        cout << "This is Negative number: " << num << endl;
    }
    else
    {
        cout << "Zero: " << num << endl;
    }

    // TODO: Take input from the user

    // TODO: Implement the nested if statements to determine and display if the number is positive, negative, or zero.

    return 0;
}
