// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
	int day;

	// TODO: Take input from the user

	cout << "Enter number of the day: " << endl;
	cin >> day;

	// TODO: Implement the switch-case logic to display appropriate messages.
	switch (day)
	{
	case 1:
		cout << "Monday - the first day of the week" << endl;
		break;
	
	case 2:
		cout << "Tuesday - the second day of the week" << endl;
		break;

	case 3:
		cout << "Wednesday - the third day of the week" << endl;
		break;
	
	case 4:
		cout << "Thursday - the fourth day of the week" << endl;
		break;

	case 5:
		cout << "Friday - the fifth day of the week" << endl;
		break;

	case 6:
		cout << "Saturday - the sixth day of the week" << endl;
		break;

	case 7:
		cout << "Sunday - the seventh day of the week" << endl;
		break;

	}
		
		return 0;
}
