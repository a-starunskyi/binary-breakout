#include <iostream>

using namespace std;

int main() {

    // TODO: Take input from the user 
    
    // TODO: Implement a while loop to calculate and display the factorial of the number

    int number;
    cout << "Enter a number: ";
    cin >> number;

    
    if (number < 0) 
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    int factorial = 1;
    int i = 1;

    while (i <= number) 
    {
        factorial *= i;
        i++;
    }

    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}
