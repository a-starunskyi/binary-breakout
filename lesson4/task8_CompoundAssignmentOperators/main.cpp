// Problem8.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer variable and assign it a value
    
    cout << "Enter a number: ";
    int generalNum = 0;
    cin >> generalNum;

    // 2. Use this variable with compound assignment operators
    
    int num1 = generalNum += 10;
    
    int num2 = generalNum -= 3;
    
    int num3 = generalNum *= 5;
    
    int num4 = generalNum /= 4;
    
    int num5 = generalNum %= 6;


    // 3. Print out the result after each operation

    cout << "Value of your number after += 10: " << num1 << endl;
    cout << "Value of your number after -= 3: " << num2 << endl;
    cout << "Value of your number after  *= 5: " << num3 << endl;
    cout << "Value of your number after /= 4: " << num4 << endl;
    cout << "Value of your number after %= 6: " << num5 << endl;
    return 0;
}
