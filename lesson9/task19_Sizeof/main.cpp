// Problem: Create a class 'Size' and use the sizeof() function to find out how much memory an instance of the class uses.

#include<iostream>
using namespace std;

// TODO: Declare the 'Size' class
class Size
{
public:
	Size(int x, int y)
		:sizeX(x),sizeY(y)
	{

	}

private:
	int sizeX;
	int sizeY;
};

int main()
{
	// TODO: Use the sizeof() function on the 'Size' class
	Size one(322,222);

	cout << sizeof(Size) << endl;
	cout << sizeof(one) << endl;
	return 0;
}
