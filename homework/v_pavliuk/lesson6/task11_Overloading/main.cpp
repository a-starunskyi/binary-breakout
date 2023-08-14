// Problem: Overload a function named "add". 
// It should be able to handle both addition of two integers and concatenation of two strings.

// TODO: Overload the function "add"

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) 
{
    return a + b;
}

string add(const string& str1, const string& str2) 
{
    return str1 + str2;
}

int main() 
{
    int num1 = 10; 
    int num2 = 10;
    string str1 = "Hello, ", str2 = "world!";

    int result1 = add(num1, num2);
    string result2 = add(str1, str2);

    cout << "Sum of integers: " << result1 << endl;
    cout << "Concatenated strings: " << result2 << endl;

    return 0;
}

