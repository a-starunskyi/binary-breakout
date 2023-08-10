// Problem: Declare a class named 'Triangle' with a member function to calculate its area. Create a pointer to an instance of this class and use the arrow operator to access the member function.

#include<iostream>
using namespace std;

// TODO: Declare the 'Triangle' class
class Triangle
{

public:
	Triangle()
	{
		height = 0;
		bases = 0;
		Area = 0;
	}


	int height;
	int bases;
	int Area;

	void triangleArea()
	{
		Area = (height * bases) / 2;

		cout << "Area of Triangle = " << Area << endl;
	}
};

int main() 
{

	Triangle tri;
	// TODO: Create a pointer to an instance of the 'Triangle' class and use the arrow operator to access the member function
	cout << "Enter heigh of triangle: ";
	cin >> tri.height;

	cout << endl;

	cout << "Enter bases of Triangle: ";
	cin >> tri.bases;

	cout << endl;

	tri.triangleArea();

	
	return 0;

}
