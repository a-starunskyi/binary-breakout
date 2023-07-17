// Problem5.cpp

#include <iostream>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input two Boolean values (0 or 1)
   
    cout << "Enter true(1) or false(0) for two operands:" << endl;
    bool op1 = false, op2 = false;
    cin >> op1;
    cin >> op2;

    // 2. Use logical operators (!, &&, ||) to manipulate these Boolean values
   
    cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
    cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;
    cout << op1 << " ! " << op2 << " = " << " op1= " << (op1 != true) << " op2= " << (op2 != true) << endl;

    // 3. Print out the results

    return 0;
}
