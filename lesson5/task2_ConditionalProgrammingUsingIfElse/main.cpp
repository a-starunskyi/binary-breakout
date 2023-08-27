// Conditional Programming Using if … else:
// Problem: Write a program that takes a number from the user and determines whether it's even or odd.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter a number" << endl;
    int num = 0;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << " This number is even" << endl;
    }
    else
    {
        cout << " This number is odd" << endl;
    }

    return 0;
}
