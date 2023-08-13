
#include <iostream>
using namespace std;

    int main() 
    {

        // TODO: Take input from the user 

        // TODO: Implement a while loop to calculate and display the factorial of the number


        int num;
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num < 0) {
            cout << "Factorial is not defined for negative numbers" << endl;
            return 1;
        }

        int factorial = 1;
        int i = 1;

        while (i <= num) {
            factorial *= i;
            i++;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
        return 0;
    }

