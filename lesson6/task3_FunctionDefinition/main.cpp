// Problem: Define a function that reverses an array of integers. Call this function from your main function.

#include<iostream>
using namespace std;

int reverseArr(int arr[], int b);
// TODO: Define the function to reverse an array


int main() 
{
    int const inum = 5;
	int arr[inum] = { 1,2,3,4,5 };


	reverseArr(arr,inum);

    std::cout << "Reversed array: ";

    for (int i = 0; i < inum; i++) 
    {
        std::cout << arr[i] << " ";
    }
	// TODO: Call the function to reverse an array
	return 0;
}

int reverseArr(int arr[], int b)
{
    int start = 0;
    int end = b - 1;

    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--;
    }
	return 0;
}
