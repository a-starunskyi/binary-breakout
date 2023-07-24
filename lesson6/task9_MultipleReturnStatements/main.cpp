// Problem: Write a function that checks if a number is prime. 
// This function should return true if the number is prime and false if it's not. Use multiple return statements in your function.

#include<iostream>
using namespace std;

bool isPrime(int a);
// TODO: Declare and define the function that checks if a number is prime

int main() 
{
	int num = 0;
	cin >> num;

	isPrime(num);

	// TODO: Call the function
	return 0;
}

bool isPrime(int a) {
   
	if (a%2==0)
	{
		cout << "Number is prime" << endl;
		return true;
	}
	else
	{
		cout << "Number is not prime" << endl;
		return false;
	}
}
