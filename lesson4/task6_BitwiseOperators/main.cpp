// Problem6.cpp

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    cout << "Enter an integer: " << endl;
    int intNum = 0;
    cin >> intNum;

    bitset<8> inputBits(intNum);
    cout << intNum << " in binary is " << inputBits << endl;

    // 2. Use bitwise operators (~, &, |, ^) to manipulate this integer
    // 3. Print out the results of these operations
    
    bitset<8> notInputBits = ~intNum;
    cout << "NOT (~): " << notInputBits << endl;

    cout << "Enter the second number for operation: " << endl;
    int second = 0;

    cin >> second;
    bitset<8> inputBitsTwo(second);
    cout << second << " in binary is " << inputBitsTwo << endl;
 
    bitset<8> andInputBits = (intNum & second);
    cout << "First AND (&) second integer in binary is: " << andInputBits << endl;

   
    bitset<8> orInputBits = (intNum | second); 
    cout << "First OR (|) second integer in binary is: " << orInputBits << endl;

    bitset<8> exOrInputBits = (intNum ^ second);
    cout << "First XOR (^) second integer in binary us: " << exOrInputBits << endl;

    return 0;
}
