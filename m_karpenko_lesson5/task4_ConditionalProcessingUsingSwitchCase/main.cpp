// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include<iostream>
using namespace std;

int main() {
    int day = 0;

	// TODO: Take input from the user

    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = Sunday;
    cin >> dayInput;

    switch (dayInput)
    {
    case Sunday:
        cout << "Sunday is the seventh day of the week" << endl;
        break;

    case Monday:
        cout << "Monday is the first day of the week" << endl;
        break;

    case Tuesday:
        cout << "Tuesday is the second day of the week" << endl;
        break;

    case Wednesday:
        cout << "Wednesday is the third day of the week." << endl;
        break;

    case Thursday:
        cout << "Thursday is the fourth day of the week" << endl;
        break;

    case Friday:
        cout << "Friday is the fifth day of the week" << endl;
        break;

    case Saturday:
        cout << "Saturday is the sixth day of the week" << endl;
        break;

    default:
        cout << "Wrong input, execute again" << endl;
        break;
    }

	// TODO: Implement the switch-case logic to display appropriate messages.

	return 0;
}
