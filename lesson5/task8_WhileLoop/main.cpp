// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main() {
    int num, a = 1, b = 1;

    // TODO: Take input from the user

    cout << "Enter the number to calculate its factorial: " << endl;
    cin >> num;

    // TODO: Implement a while loop to calculate and display the factorial of the number

    while (b <= num)
    {
        a = a * b;
        b++; 
    }

    cout << "The factorial of " << num << " is " << a << endl;

    return 0;
}
