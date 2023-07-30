// task6_lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Develop a C++ program that uses bitwise operators (~, &, |, ^) to manipulate an integer entered by the user.

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	// Input: Ask the user to enter a number between 0 and 150
	cout << "Enter a number (0 - 150): ";
	unsigned short inputNum = 0;
	cin >> inputNum;

	// Convert the input number to an 8-bit binary representation (bitset)
	bitset<8> inputBits(inputNum); // Create a bitset of size 8 (8 bits)
	cout << inputNum << " in binary is " << inputBits << endl;

	// Bitwise NOT: Perform logical NOT (~) operations on the input number
	bitset<8> bitwiseNOT = (~inputNum); // Equivalent to bitwiseNOT = (~inputBits);
	cout << "Logical NOT ~" << endl;
	cout << "~" << inputBits << " = " << bitwiseNOT << endl;

	// Bitwise AND: Perform logical AND (&) operations with 00001111 (binary) or 0x0F (hex)
	cout << "Logical AND, & with 00001111" << endl; // 0x0F is hex for 0001111 in binary
	bitset<8> bitwiseAND = (0x0F & inputNum);
	cout << "0001111 & " << inputBits << " = " << bitwiseAND << endl;

	// Bitwise OR: Perform logical OR (|) operation with 00001111 (binary) or 0x0F (hex)
	cout << "Logical OR, | with 00001111" << endl; // 0x0F is hex for 0001111 in binary
	bitset<8> bitwiseOR = (0x0F | inputNum);
	cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

	// Bitwise XOR : Perform logical XOR (^) operation with 00001111 (binary) or 0x0F (hex)
	cout << "Logical XOR, ^ with 00001111" << endl; // 0x0F is hex for 0001111 in binary
	bitset<8> bitwiseXOR = (0x0F ^ inputNum);
	cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
