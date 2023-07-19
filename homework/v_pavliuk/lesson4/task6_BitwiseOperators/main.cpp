#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
        int number;
        std::cout << "Enter integral number: ";
        std::cin >> number;

        std::cout << "Your number: \t " << bitset<8>(number) << std::endl;

        std::cout << "NOT Your number: " << bitset<8>((~number)) << std::endl;
        std::cout << "AND Your number: " << bitset<8>((number & (~number))) << std::endl;

        return 0;
 }

