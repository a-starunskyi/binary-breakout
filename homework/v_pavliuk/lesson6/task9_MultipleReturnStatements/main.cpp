// Problem: Write a function that checks if a number is prime. 
// This function should return true if the number is prime and false if it's not. Use multiple return statements in your function.

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) 
    {
        return false; 
    }

    if (num == 2) 
    {
        return true; 
    }

    if (num % 2 == 0) 
    {
        return false; 
    }

    for (int i = 3; i * i <= num; i += 2) 
    {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num)) 
    {
        cout << num << " is a prime number." << endl;
    }
    else 
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
