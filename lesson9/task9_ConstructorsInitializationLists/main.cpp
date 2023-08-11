// Problem: Declare a class 'Rectangle' with a constructor that uses an initialization list to set its attributes.

#include<iostream>
using namespace std;

// TODO: Declare the 'Rectangle' class with a constructor that uses an initialization list
class Rectangle
{
private:

    double width;
    double height;

public:
    Rectangle(double width, double height)
        : width(width), height(height)
    {

    }

    void Area()
    {
        cout << width * height << endl;
    }

  
};

int main() 
{
 
    Rectangle rectangle(5.0, 3.0);
    
    rectangle.Area();


	// TODO: Create an instance of the 'Rectangle' class
	return 0;
}
