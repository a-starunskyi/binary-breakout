// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    for (int num = 1; num <= 100; num++) 
    {

        sum += num;
        if (num % 3 == 0) {
            cout << "Number: " << num << " has been skipped " << endl;
            continue;
        }

        if (sum > 1000) 
        {
            cout << "Stopping the loop because of sum value exceeds 1000" << endl;
            break;
        }
    }
        
    cout << "The sum of numbers is: " << sum << endl;

    return 0;
}
