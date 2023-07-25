// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include<iostream>
using namespace std;

int main() {

	// TODO: Implement a loop with 'continue' and 'break' to perform the specified task

	int count = 0;
	int sum = 0;

	while (count < 100)
	{
		
		if (count % 3)
		{
			count++;
			continue;
		}
		
		cout << ++count << endl;

		
	 sum += count;
		count++;


		if (sum >= 1000)
		{
			break;
		}
	}

	return 0;
}
