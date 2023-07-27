// Problem6.cpp

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    cout << "Enter an integer: " << endl;
    int num1 = 0;
    cin >> num1;

    // 2. Use bitwise operators (~, &, |, ^) to manipulate this integer
    bitset<8> inputBits(num1);
    cout << " In binary this number is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~num1);
    cout << "Operator NOT ~" << endl;
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;

    cout << "Operator AND, & with 00001111" << endl;
    bitset<8> bitwiseAND = (0x0F & num1);
    cout << "0001111 & " << inputBits << " = " << bitwiseAND << endl;

    cout << "Operator OR, | with 00001111" << endl;
    bitset<8> bitwiseOR = (0x0F | num1);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

    cout << "Operator XOR, ^ with 00001111" << endl;
    bitset<8> bitwiseXOR = (0x0F ^ num1);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

    // 3. Print out the results of these operations

    return 0;
}
