// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
	// TODO: Take input from the user
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
         
	cout << "Enter a number of day: (remember Sunday is 0):  " << endl;
	int day = 0;
	cin >> day;

	// TODO: Implement the switch-case logic to display appropriate messages.
	if (day == 7)
	{
		cout << "Sunday is the seventh day of the week" << endl; 
	}
	else if (day == 1)
	{
		cout << "Monday is the first day of the week " << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday is the second day of the week" << endl;
	}
	else if (day == 3)
	{
		cout << "Wednesday is the third day of the week" << endl;
	}
	else if (day == 4)
	{
		cout << "Thursday is the forth day of the week" << endl;
	}
	else if (day == 5)
	{
		cout << "Friday is the fifth day of the week" << endl;
	}
	else if (day == 6)
	{
		cout << "Saturday is the sixth day of the week" << endl;
	}
	else
	{
		cout << "Wrong input, execute again" << endl; 
	}
	return 0;
}


