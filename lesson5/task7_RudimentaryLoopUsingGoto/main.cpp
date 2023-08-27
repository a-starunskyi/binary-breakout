// Problem: Write a program that outputs numbers from 10 to 1 using the goto statement.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int number = 1; // Initialize the starting number

loop_start:
    if (number > 10) // Check if the number is greater than 10
        goto loop_end; // If yes, gump to loop_end

    cout << number << endl; // output the current number
    number++; // Increment the number
    goto loop_start; // Jump back to loop_start

loop_end:

    // TODO: Implement a loop using 'goto' to display numbers from 10 to 1

    return 0;
}
