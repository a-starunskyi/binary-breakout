// Problem1.cpp

#include <iostream>

using namespace std;

int sum3(int a, int b, int c);
int subs3(int a, int b, int c);
int mult3(int a, int b, int c);
int div3(int a, int b, int c);
int modDiv3(int a, int b, int c);

int main() 
{
    // TODO:
    // 1. Declare three integer variables a, b, and c and initialize them with any values
    
    int a = 128; 
    int b = 2;
    int c = 2; 

    // 2. Use arithmetic operators +, -, *, /, % to perform operations on these variables
    // 3. Print out the result after each operation
    
    sum3(a, b, c);
    subs3(a, b, c);
    mult3(a, b, c);
    div3(a, b, c);
    modDiv3(a, b, c);


    // 4. Don't forget to handle the situation where the denominator might be zero in a division operation

    return 0;
}


int sum3(int a,int b, int c)
{
    int sum = 0;
    sum = a + b + c;

    cout << "Plus numbers: " << sum << endl;

    return 0;
}

int subs3(int a, int b, int c)
{
    int subs = 0;
    subs = a - b - c;

    cout << "Subtracting numbers: " << subs << endl;

    return 0;
}

int mult3(int a, int b, int c)
{
    int mult = 0;
    mult = a * b * c;

    cout << "Multiplication of numbers: " << mult << endl;

    return 0;
}

int div3(int a, int b, int c)
{
    int div = 0;

    if ((a == 0 || b == 0 || c == 0))
    {
        cout << "You entered zero. Division by zero is not possible" << endl;
        
        return 0;
    }
    else
    {
        div = a / b / c;

        cout << "Division of numbers: " << div << endl;

        return 0;
    }
}

int modDiv3(int a, int b, int c)
{
    int modDiv = 0;

    if ((a == 0 || b == 0 || c == 0))
    {
        cout << "You entered zero. Division by zero is not possible" << endl;

        return 0;
    }
    else
    {
        modDiv = a / b / c;

        cout << "Modulo division of numbers: " << modDiv << endl;

        return 0;
    }

}
