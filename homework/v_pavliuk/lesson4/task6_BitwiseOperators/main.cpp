#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
        int number = 0;
        cout << "Enter integral number: ";
        cin >> number;

        cout << "Your number: \t " << bitset<8>(number) << endl;

        cout << "NOT Your number: " << bitset<8>((~number)) << endl;
        cout << "AND Your number: " << bitset<8>((number & number)) << endl;
        cout << "OR Your number: " << bitset<8>((number | number)) << endl;
        cout << "XOR Your number: " << bitset<8>((number ^ number)) << endl;

        return 0;
 }

