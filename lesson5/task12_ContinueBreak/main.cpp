// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int sum = 0; // Initialize the sum variable

    for (int num = 1; num <= 100; num++)
    {
        if (num % 3 == 0)
        {
            continue; // Skip numbers divisible by 3
        }
        if (sum + num > 1000)
        {
            break; // Stop the loop if sum exceeds 1000
        }

        sum += num;
        cout << "Current number: " << num << ", Current sum: " << sum << endl;
    }

    cout << "Loop  ended." << endl;

    // TODO: Implement a loop with 'continue' and 'break' to perform the specified task

    return 0;
}
