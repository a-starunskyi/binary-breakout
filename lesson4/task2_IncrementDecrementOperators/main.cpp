// Problem2.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Declare an integer variable
    int num = 408;
    std::cout << "prefix increment: " << ++num << '\n';

    num = 408; //reset

    std::cout << "postfix increasement: " << num++ << '\n';


    num = 408; //reset

    std::cout << "prefix decreasement: " << --num << '\n';

    num = 408; //reset


    std::cout << "postfix decreasement: " << num-- << '\n';

    // 2. Use both prefix and postfix increment (++) and decrement (--) operators on this variable
    // 3. Print the variable's value after each operation

    return 0;
}
