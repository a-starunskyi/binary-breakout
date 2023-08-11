// Problem: Create a class 'HeapOnly' that can only be instantiated on the heap, not the stack.

#include<iostream>
using namespace std;

// TODO: Declare the 'HeapOnly' class
class HeapOnly 
{
public:
    static HeapOnly* createInstance() 
    {
        return new HeapOnly();
    }

    void showMessage() {
        std::cout << "Hello from the HeapOnly instance!" << std::endl;
    }

private:
    HeapOnly()
    {
    } 

    ~HeapOnly() {};

};


int main() {
	// TODO: Try to create an instance of the 'HeapOnly' class on the stack and on the heap

    HeapOnly* heapOnlyPtr = HeapOnly::createInstance();
    heapOnlyPtr->showMessage();
	return 0;
}
