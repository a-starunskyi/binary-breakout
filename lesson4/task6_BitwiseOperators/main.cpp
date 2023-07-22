// Problem6.cpp

#include <iostream>

int main() {
    // TODO:

    // 1. Ask the user to input an integer
    
    // 2. Use bitwise operators (~, &, |, ^) to manipulate this integer

    // 3. Print out the results of these operations

        int letThatSinkIn;
        std::cout << "Enter an integer: ";
        std::cin >> letThatSinkIn;

        
        // 0xFF is 11111111 on binary 8 ones 
        int operatorNOT = ~letThatSinkIn;
        int operatorAND = letThatSinkIn & 0xFF;
        int operatorOR = letThatSinkIn | 0xFF;
        int operatorXOR = letThatSinkIn ^ 0xFF;

        std::cout << "operator ~ " << operatorNOT << std::endl;
        std::cout << "operator & " << operatorAND << std::endl;
        std::cout << "operator | " << operatorOR << std::endl;
        std::cout << "operator ^ " << operatorXOR << std::endl;

    return 0;
}
