// Problem: Define a function that reverses an array of integers. Call this function from your main function.

#include<iostream>
using namespace std;

// TODO: Define the function to reverse an array
void displayArray(int num[], int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << num[index] << " ";
	}

	cout << endl;
}
int main() {
	int myNums[5] = { 1,2,3,4,5 };
	displayArray(myNums, 5);

	// TODO: Call the function to reverse an array
	return 0;
}
