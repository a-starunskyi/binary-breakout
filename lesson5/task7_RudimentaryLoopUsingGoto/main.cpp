// Problem: Write a program that outputs numbers from 10 to 1 using the goto statement.

#include<iostream>
using namespace std;

int main() {
	int num = 10;
start:
	cout << num << " ";
	num--;
	if (num >= 1)
		goto start;

	return 0;
}
