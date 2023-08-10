// Problem: Create a class 'SelfReferential' and use the 'this' pointer within the class to access its members.

#include<iostream>
using namespace std;

// TODO: Declare the 'SelfReferential' class and use the 'this' pointer

class SelfReferential 
{
public:
    SelfReferential(int value)
        : m_value(value) 
    {

    }

    void printValue()
    {

        cout<< this->m_value << endl;
    }

private:
    int m_value;
};  

int main() 
{
	// TODO: use the 'SelfReferential' class

    SelfReferential obj(42);

    obj.printValue();

	return 0;
}
