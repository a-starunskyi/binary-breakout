// Problem6.cpp

#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
    // TODO:
    // 1. Ask the user to input an integer
    
    cout << "Enter a number : ";
    unsigned short inputNum = 0;
    cin >> inputNum;

    // 2. Use bitwise operators (~, &, |, ^) to manipulate this integer
    
    bitset<8> inputBits(inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;

    bitset<8> bitwiseNOT = (~inputNum);
    
    bitset<8> bitwiseAND = (0x0F & inputNum);

    bitset<8> bitwiseOR = (0x0F | inputNum);

    bitset<8> bitwiseXOR = (0x0F ^ inputNum);

    // 3. Print out the results of these operations

    cout << bitwiseNOT << endl;
    cout << bitwiseAND << endl;
    cout << bitwiseOR << endl;
    cout << bitwiseXOR << endl;

    return 0;
}
