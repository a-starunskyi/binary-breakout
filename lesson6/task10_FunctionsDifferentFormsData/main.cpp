// Problem: Write a function that takes a string and returns the number of vowels in the string.

#include<iostream>
using namespace std;

// TODO: Declare and define the function that counts the vowels in a string
int findVovel(string a);

int main() 
{
	string helloWorld = "";

	cout << " Input text: ";
	cin >> helloWorld;

	// TODO: Call the function

	cout << findVovel(helloWorld) << endl;

	return 0;
}

int findVovel(string a)
{
	int numVov = 0;

	for (int i = 0; i < a.length(); i++)
	{
		char temp = towlower(a[i]);
		a[i] = temp;

		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			numVov++;
		}
	}


	return numVov;
}
