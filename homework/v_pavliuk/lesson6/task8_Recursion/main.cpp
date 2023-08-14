// Problem: Write a recursive function that calculates the factorial of a number.
// TODO: Declare and define the recursive function that calculates factorial of a number


#include<iostream>

using namespace std;

int factorial(int n) {

	if (n == 0 || n == 1) 
	{
		return 1;
	}
	else 
	{
		return n * factorial(n - 1);
	}
}

int main() 
{
    int num;

    cout << "Enter a negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }
}
