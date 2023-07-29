// Problem: Write a program that outputs numbers from 10 to 1 using the goto statement.

#include<iostream>
using namespace std;

int main() {
	int number = 10;

burgerKing:
    std::cout << number << "\n";
    number--;

    if (number > 0) {
        goto burgerKing;
    }
	// TODO: Implement a loop using 'goto' to display numbers from 10 to 1

	return 0;
}
//BURGERKING