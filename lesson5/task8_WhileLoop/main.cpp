// Problem: Write a program that calculates the factorial of a number using a while loop.

#include <iostream>
using namespace std;

int main()
{
    cout << "Let's calculate the factorial of a number!" << endl;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) // Checks if the input number is negative
    {
        cout << "Factorial isn't defined for negative numbers" << endl;
    }
    else
    {
        int factorial = 1; // Initializes the variable to store the factorial
        int i = 1;      // Initialize a counter variable for the loop

        while (i <= number) // Use while loop
        {
            // After the loop, the program prints the calculated factorial
            factorial *= i; // Updates the factorial by multiplying it with the current value of 'i'
            i++;        // Increment the counter for hte next iteration
        }

        cout << "The result is: " << "!" << number << " = " << factorial << endl;

    }
    // TODO: Take input from the user

    // TODO: Implement a while loop to calculate and display the factorial of the number

    return 0;
}
