// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
	enum daysOfWeek
	{
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};
	std::cout << "appropriate messages about all days in the week: " << std::endl;
	std::cout << "Monday had number 1 and sunday is 7 so you know what to do (1-7)" << std::endl;

	int dayInput = Monday;
	std::cin >> dayInput;
	switch (dayInput) {
	case Monday:
		std::cout << "Monday... you know go to work nigga" << '\n';
		break;
	case Tuesday:
		std::cout << "Tuesday is just monday ugly sister" << std::endl;
		break;
	case Wednesday:
		std::cout << "uhh... umm... Wednesday?" << std::endl;
		break;
	case Thursday:
		std::cout << "Final day before friday" << std::endl;
		break;
	case Friday:
		std::cout << "Final boss, lets do it" << std::endl;
		break;
	case Saturday:
		std::cout << "wake up in 5am never be soo easy" << std::endl;
		break;
	case Sunday:
		std::cout << "noooo tommorow i need go back to scool D; D=" << std::endl;
		break;
	default:
		std::cout << "Wrong input bro: " << std::endl;
		break;
	}
	// TODO: Take input from the user

	// TODO: Implement the switch-case logic to display appropriate messages.

	return 0;
}
// bruh
