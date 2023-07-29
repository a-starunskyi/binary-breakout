// Problem: Write a program that goes through numbers from 1 to 100, but skips numbers divisible by 3 (using 'continue'), 
// and also stops the loop if the sum of all previous numbers exceeds 1000 (using 'break').

#include<iostream>

int main() {

	int sum = 0;
	for (int num = 0; num <= 100; num++) {
		if (num % 3 == 0) {
			continue;
		}
		sum += num;
		if (sum + num > 1000) {
			break;
		}
	}
	// TODO: Implement a loop with 'continue' and 'break' to perform the specified task
	std::cout << sum << std::endl;
	return 0;
}
// i dont know what i do wrong but i think this code is bad
//anyway thats all i can do

//finded issue using third app services
//soo previous code outpust 1027
//            
//		if (sum > 1000) {
//		break;
//		}
//
//so i changed it