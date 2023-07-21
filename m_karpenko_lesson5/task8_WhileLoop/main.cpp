// Problem: Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main()
{

    int number = 0;
    int factorialNumber = 1;

    cout << "Enter number: ";
    cin >> number; 

    for (int i = 1; i < number + 1; i++) 
    { 
        factorialNumber = factorialNumber * i;
        cout << factorialNumber << endl;
    }


    return 0;
}
