// Problem: Write a function that checks if a number is prime. 
// This function should return true if the number is prime and false if it's not. Use multiple return statements in your function.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that checks if a number is prime
bool isPrime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	
	if (num <= 3)
	{
		return false;
	}

	for (int i = 5; i * i <= num; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return false;
		}
	}
		
			return true;
		
	}
int main() {
	// TODO: Call the function
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (isPrime(num))
	{
		cout << num << " is a prime." << endl;
	}
	else
	{
		cout << num << " is not a prime." << endl;
	}
	return 0;
}
