// Problem: Write a program that asks for the day of the week and displays an appropriate message (e.g. "Monday - the first day of the week").

#include <iostream>
using namespace std;

int main()
{
    enum DaysOfWeek
    {
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    cout << "Determine the order of the days of the week!" << endl;
    cout << "Enter the day of the week (1 for Monday, 2 for Tuesday, etc.): " << endl;

    int dayInput = Monday; // Initialize to Monday
    cin >> dayInput;

    switch (dayInput)
    {
    case Monday:
        cout << "Monday - the first day of the week" << endl;
        break;

    case Tuesday:
        cout << "Tuesday - the second day of the week" << endl;
        break;

    case Wednesday:
        cout << "Wednesday - the third day of the week" << endl;
        break;

    case Thursday:
        cout << "Thursday - the forth day of the week" << endl;
        break;

    case Friday:
        cout << "Friday - the fifth day of the week" << endl;
        break;

    case Saturday:
        cout << "Saturday - the sixth day of the week" << endl;
        break;

    case Sunday:
        cout << "Sunday - the seventh day of the week" << endl;
        break;

    default:
        cout << "Wrong input, please enter a number between 1 and 7 " << endl;
        break;
    }

    // TODO: Take input from the user

    // TODO: Implement the switch-case logic to display appropriate messages.

    return 0;
}
