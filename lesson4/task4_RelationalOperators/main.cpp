// Problem4.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input three integers
    
    cout << "Enter three integers: " << endl;
    int num1 = 0, num2 = 0, num3 = 0;
    cin >> num1;
    cin >> num2;
    cin >> num3;
   
    // 2. Use relational operators to determine the largest and smallest numbers among the inputs

    bool firstTrueBig = (num1 > num2 && num1 > num3);
    bool secondTrueBig = (num2 > num1 && num2 > num3);
    bool thirdTrueBig = (num3 > num1 && num3 > num2);

    bool firstTrueSmall = (num1 < num2 && num1 < num3);
    bool secondTrueSmall = (num2 < num1 && num2 < num3);
    bool thirdTrueSmall = (num3 < num1 && num3 < num2);
    
    // 3. Print out these values

    cout << "First number is the biggest: " << firstTrueBig << endl;
    cout << "Second number is the biggest: " << secondTrueBig << endl;
    cout << "Third number is the biggest: " << thirdTrueBig << endl; 

    cout << "First number is the smallest: " << firstTrueSmall << endl;
    cout << "Second number is the smallest: " << secondTrueSmall << endl;
    cout << "Third number is the smallest: " << thirdTrueSmall << endl;

    return 0;
}
