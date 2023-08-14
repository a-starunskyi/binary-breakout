// Problem: Write a function that swaps the values of two integers. Pass these integers by reference.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that swaps two integers

#include <iostream>

using namespace std;

void swapIntegers(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapIntegers(num1, num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
