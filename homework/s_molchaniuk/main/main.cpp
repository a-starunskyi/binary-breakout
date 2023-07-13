#include <iostream>
#include <string>
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

	int inputDateOfBirth;
	cout << "enter your date of birth (YYYY/MM/DD): ";
	cin >> inputDateOfBirth;
	 
	cout << inputName << " " << inputSurname << " " << " was born " << inputDateOfBirth << " now he/she " << 2023 - inputDateOfBirth << " years old " << endl;
}
// no comments there is no need to explain how it works