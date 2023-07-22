// Problem5.cpp

#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input two Boolean values (0 or 1)
    bool num1 = true;
    bool num2 = true; 
    cout << "Enter 1 or 0: " << endl;
    cin >> num1;
    cin >> num2;

    // 2. Use logical operators (!, &&, ||) to manipulate these Boolean values
    !num1 != num2;
    
    cout << num1 << " AND " << num2 << " = " << (num1 && num2) << endl;
    cout << num1 << " OR " << num2 << " = " << (num1 || num2) << endl;

    // 3. Print out the results

    return 0;
}
