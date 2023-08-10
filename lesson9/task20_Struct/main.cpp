// Problem: Create a struct and a class and demonstrate the main difference between the two in terms of access modifiers.

#include<iostream>
using namespace std;

class Demo
{
	int num;
};

struct DemoStruct
{
	int numStruct;
};
// TODO: Declare a struct and a class

int main() 
{

	Demo demo;

	DemoStruct demoStruct;

	//demo.num; will not work because classes initially have variables in private scope

	demoStruct.numStruct;

	// TODO: Demonstrate the main difference between struct and class in terms of access modifiers
	return 0;
}
