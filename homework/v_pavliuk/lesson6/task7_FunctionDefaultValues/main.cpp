// Problem: Write a function that takes two integers as parameters and returns their product. Give these parameters default values.
// TODO: Declare and define the function that multiplies two integers with default values

#include <iostream>
using namespace std;

int multiply(int a = 0, int b = 0) {
    return a * b;
}

int main() {
    int num1 = 2;
    int num2 = 5;

    int result = multiply(num1, num2);

    cout << "Output: " << result << endl;

    return 0;
}
