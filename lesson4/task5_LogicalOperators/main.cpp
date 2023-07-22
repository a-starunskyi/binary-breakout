// Problem5.cpp

#include <iostream>

int main() {
    bool value1, value2;
    // TODO:
    // 1. Ask the user to input two Boolean values (0 or 1)
    std::cout << "enter first bool value (0 , 1):";
    std::cin >> value1;

    std::cout << "enter second bool value (0, 1):";
    std::cin >> value2;

    bool usingNotOperator1 = !value1;
    bool usingNotOperator2 = !value2;
    bool usingAndOperator1 = value1 && value2;
    bool usingOrOperator1 = value1 || value2;

    std::cout << "Operator NOT on value1: " << usingNotOperator1 << std::endl;
    std::cout << "Operator NOT on value2: " << usingNotOperator2 << std::endl;
    std::cout << "Operator AND on value 1 and value2: "<< usingAndOperator1 << std::endl;
    std::cout << "Operator OR on value1 and value2: " << usingOrOperator1 << std::endl;
    // 2. Use logical operators (!, &&, ||) to manipulate these Boolean values
    // 3. Print out the results

    return 0;
}
