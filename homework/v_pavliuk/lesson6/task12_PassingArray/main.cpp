// Problem: Write a function that takes an array of integers and its size, and returns the sum of the elements in the array.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that calculates the sum of elements in an array

int sumArray(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; 

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    int totalSum = sumArray(arr, size);
    cout << "Sum of array elements: " << totalSum << endl;

    delete[] arr; 

    return 0;
}
