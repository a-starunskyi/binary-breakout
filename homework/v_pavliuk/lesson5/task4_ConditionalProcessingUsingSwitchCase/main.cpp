// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
	
	// TODO: Take input from the user

	// TODO: Implement the switch-case logic to display appropriate messages.
	
	
	int day;
	cout << "Enter the day of the week: ";
	cin >> day;

	switch (day)
	{
		case 1:
			cout << "Monday - the first day of the week";
			break;
	
		case 2:
			cout << "Thuesday - the second day of the week";
			break;

		case 3: 
			cout << "Wednesday - the third day of the week";
			break;

		case 4:
			cout << "Thursday - the fourth day of the week";
			break;

		case 5:
			cout << "Friday - the fifth day of the week";
			break;

		case 6:
			cout << "Saturday - the sixth day of the week";
			break;

		case 7:
			cout << "Sunday - the seventh day of the week";
			break;
			default:
			cout << "Invalid input! Please enter a number between 1 and 7." << endl;
			break;

	}

	return 0;
}
