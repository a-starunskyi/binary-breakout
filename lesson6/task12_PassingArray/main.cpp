// Problem: Write a function that takes an array of integers and its size, and returns the sum of the elements in the array.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that calculates the sum of elements in an array
int arrSum(int arr[], int sizeArr);

int main()
{

	int arrNum[5] = {2,3,6,4,2};
	// TODO: Call the function

	cout << arrSum(arrNum,5) << endl;

	return 0;
}

int arrSum(int arr[], int sizeArr)
{
	int sum = 0;

	for (int i = 0; i < sizeArr; i++)
	{
		
		sum = sum + arr[i];
	}

	return sum;
}
