// Problem: Declare a class 'Note' with a copy constructor. Use the copy constructor to create a copy of a 'Note' object.

#include<iostream>
using namespace std;

// TODO: Declare the 'Note' class with a copy constructor


// TODO: Create an instance of the 'Note' class and use the copy constructor to create a copy

class Note
{
public:
	Note(string n_title, int n_page)
		:title(n_title),page(n_page)
	{
	}

	Note(const Note& other)
		:title(other.title),page(other.page)
	{

	};

	void print()
	{
		cout << title << endl;
		cout << page << endl;
		cout << endl;
	}

private:

	string title;
	int page;
};

int main()
{
	Note notepad("Note", 12);
	Note notepadTwo(notepad);

	notepad.print();
	notepadTwo.print();
	// TODO: Create an instance of the 'Note' class and use the copy constructor to create a copy
	return 0;
}