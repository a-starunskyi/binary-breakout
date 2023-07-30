// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.

#include<iostream>
using namespace std;

int main() {

	const int array1 = 10;
	const int array2 = 10;

	int nums1[array1] = { 1,2,3,4,5,6,7,8,9,10 };
	int nums2[array2] = { 1,2,3,4,5,6,7,8,9,10 };
	
	cout << " The multiplication table from 1 to 10" << endl;

	// TODO: Implement nested loops to display the multiplication table from 1 to 10

	for (int index1 = 0; index1 < array1; ++index1)
	{
		for (int index2 = 0; index2 < array2; ++index2)
		{
			cout << nums1[index1] << " x " << nums2[index2] << " = " << nums1[index1] * nums2[index2] << endl;
		}
	}


	return 0;
}
