// Problem: Write a program that goes through an array of fixed size and displays all its elements.

#include<iostream>
using namespace std;

int main() {
    int arr[5]; // Fixed size array

    // TODO: Populate the array

    cout << "Element   Value" << endl;

    // TODO: Implement a loop to display all elements of the array
    for(int num = 0; num < 5; num++)
    {
        arr[num] = 5;
        cout << num << "         " << arr[num] << endl;
    }
    return 0;
}