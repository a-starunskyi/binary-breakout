// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include<iostream>
using namespace std;

int main() {
	int n = 0;
	int sum = 0;

	while (n<=100)
	{
		if (n % 3 == 0)
		{
			n++;
			continue;
		}

		cout << n << endl;

		sum += n;
		n++;


		if (sum>=1000)
		{
			break;
		}
	}
	


	// TODO: Implement a loop with 'continue' and 'break' to perform the specified task

	return 0;
}
