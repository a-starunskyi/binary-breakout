// Problem: Write a program that outputs numbers from 1 to 10.

#include<iostream>
#include <string>
using namespace std;

int main() {

	// TODO: Implement a loop to display numbers from 1 to 10
	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int aNum : nums)
	{
		cout << aNum << ' ' << endl;
	}
	return 0;
}
