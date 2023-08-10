// Problem: Declare a class 'Book' with a constructor that sets its attributes 'title' and 'author'. Implement the constructor separetly of the class declaration.

#include<iostream>
using namespace std;

// TODO: Declare the 'Book' class with a constructor
class Book
{
public:	
	Book();

	string title;
	string autor;
};

// TODO: Implement the 'Book' class constructor
Book::Book()
{
	title = "Tales";
	autor = "Mark Karpenko";
}

int main() {
	// TODO: Create an instance of the 'Book' class
	Book bookOfTales;

	cout << "Title this book: " << bookOfTales.title << endl;
	cout << "Author this book: " << bookOfTales.autor << endl;
	return 0;
}
