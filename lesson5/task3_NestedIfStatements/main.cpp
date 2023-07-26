// Problem: Write a program that checks if the number entered by the user is positive, negative or zero.

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Input the value for the number"
	cin >> num;
	if (num > 0) {
		cout << "Number is positive.";
		if (num<0){
			cout << "Number is negative.";
			if (num == 0) {
				cout << "Number is zero.";
			}
		}
	}

	return 0;
}
