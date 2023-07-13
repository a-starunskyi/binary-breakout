#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	string hello;
	cout << "Hello world (just type anything: ";
	cin >> hello;
	string inputName;
	cout << "enter your name: ";
	cin >> inputName;

	string inputSurname;
	cout << "enter your surname: ";
	cin >> inputSurname;

	//get current date
	time_t now = time(nullptr);
	tm localTime;
	localtime_s(&localTime, &now);
	int currentYear = localTime.tm_year + 1900;
	int currentMonth = localTime.tm_mon + 1;
	int currentDay = localTime.tm_mday;

	//promt
	int birthYear, birthMonth, birthDay;
	cout << "Enter your date of birth (YYYY MM DD): ";
	cin >> birthYear >> birthMonth >> birthDay;

	//calculate
	int age = currentYear - birthYear;
	if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
		age--;
	}

	cout << inputName << " " << inputSurname << " Your age is: " << age << endl;

}
//also i want to say that i asked chatgpt to write me code usind namespace std 
// he write code for me that uses ctime like in python to get user age 
// sorry :D
// D: