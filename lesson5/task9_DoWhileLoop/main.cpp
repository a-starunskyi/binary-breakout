// Problem: Write a program that asks the user to enter numbers until a zero is entered.

#include<iostream>
using namespace std;

int main()
{
    // TODO: Implement a do...while loop to take numbers from user until zero is entered
    int num = 0;

    do
    {
        cout << "Enter a number: " << endl; 
        cin >> num;
    } while (num != 0); 

    cout << "A zero was entered, goodbye!" << endl;

    return 0;
}