// Problem: Create a function prototype for a function that takes two integers as parameters and returns their sum. 
// Then define and call this function in your main function.

#include <iostream>
using namespace std;

// TODO: Declare the function prototype
int addTwoIntegers(int a, int b);

int main() {

    // TODO: Define and call the function

    int num1;
    int num2;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;
  
    int sum = addTwoIntegers(num1, num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

int addTwoIntegers(int a, int b) {

    return a + b;
}
