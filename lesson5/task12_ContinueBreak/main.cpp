// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include<iostream>
using namespace std;

int main() {

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			continue;
		}
		if (sum + i > 1000) {
			break;
		}
		sum += i;
	}
	cout << "The sum of numbers from 1-100, excluding divisible by 3, is: " << sum;
	return 0;
}
