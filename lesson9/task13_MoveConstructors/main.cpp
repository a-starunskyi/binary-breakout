// Problem: Create a class 'FastTransfer' that utilizes a move constructor. Demonstrate how this can help improve performance.

#include<iostream>
using namespace std;

// TODO: Declare the 'FastTransfer' class with a move constructor

class FastTransfer
{
public:

	FastTransfer (FastTransfer& source)
	{
		num = source.num;
	}
	
	FastTransfer(int number)
		:num(number)
	{

	}


	int num;
};



int main() {
	// TODO: Demonstrate how move constructors can help improve performance

	FastTransfer trans(42);

	FastTransfer transAgain(trans);

	cout << transAgain.num << endl;

	return 0;
}
