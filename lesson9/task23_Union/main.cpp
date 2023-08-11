// Problem: Declare a union 'DataUnion' that can store a float, an integer and a character.

#include<iostream>
using namespace std;

// TODO: Declare a union named 'DataUnion'
union DataUnion
{
	int num;
	float pi;
	char sign;
};

int main() 
{

    DataUnion data;

    data.pi = 3.14;
    cout << "Float Value: " << data.pi << endl;

    data.num = 42;
    cout << "Int Value: " << data.num << endl;

    data.sign = 'A';
    cout << "Char Value: " << data.sign << endl;

    return 0;
	// TODO: Create an instance of 'DataUnion' and assign it different values
	return 0;
}
