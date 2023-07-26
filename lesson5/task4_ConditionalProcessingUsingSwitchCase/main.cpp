// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
	int day;
	cout << "Input the number from 1-7 to see the day of the week: ";
		cin >> day;
		switch (day) {
		case 1:
			cout << "Monday is the first day of the week.";
			break;
		case 2:
			cout << "Tuesday is the second day of the week.";
			break;
		case 3:
			cout << "Wednesday is the third day of the week.";
			break;
		case 4:
			cout << "Thursday is the fourth day of the week.";
			break;
		case 5:
			cout << "Friday is the fifth day of the week.";
			break;
		case 6:
			cout << "Saturday is the sixth day of the week.";
			break;
		case 7:
			cout << "Sunday is the seventh day of the week.";
			break;
		default:
			cout << "Invalid input. Enter a number between 1 and 7.";
			break;
		}

	return 0;
}
