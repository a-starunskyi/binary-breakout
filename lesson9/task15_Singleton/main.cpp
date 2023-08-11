// Problem: Create a 'Singleton' class that only allows a single instance of itself to be created.

#include<iostream>
using namespace std;

// TODO: Declare the 'Singleton' class
class Singleton 
{
public:
   
    static Singleton& getInstance() 
    {
        static Singleton instance; 
        return instance;
    }

    void showMessage() {
       cout << "Message" << endl;
    }

private:

    Singleton(const  Singleton&)
    {

    }
    Singleton() 
    {

    }

};

int main() 
{

    Singleton& singleton1 = Singleton::getInstance();

    singleton1.showMessage();

  // Singleton sing2(singleton1);


	// TODO: Try to create multiple instances of the 'Singleton' class
	return 0;
}
