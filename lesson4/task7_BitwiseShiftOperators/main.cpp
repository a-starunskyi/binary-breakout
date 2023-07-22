// Problem7.cpp

#include <iostream>

int main() {
    // TODO:
    // 1. Ask the user to input an integer
    // 2. Use bitwise shift operators (>>, <<) to shift the bits of this integer
    // 3. Print out the results of these operations
    // 4. Remember to write comments explaining what your program does

    int num, numShifted;
   

    
    std::cout << "Enter an integer number: ";
    std::cin >> num;


    numShifted = num << 1;
    std::cout << "Result of left shift (" << num << " << " << "by 1 position" << "): " << numShifted << std::endl;


    numShifted = num >> 1;
    std::cout << "Result of right shift (" << num << " >> " << "by 1 position" << "): " << numShifted << std::endl;


    numShifted = num << 2;
    std::cout << "Result of left shift (" << num << " << " << "by 2 positions" << "): " << numShifted << std::endl;


    numShifted = num >> 2;
    std::cout << "Result of left shift (" << num << " << " << "by 2 positions" << "): " << numShifted << std::endl;

    return 0;
}
//i think there is no need to explain how it works
//but, that "num << 1" is multiply num by 2 ">>" is dividing num by 2
//"num << 2" multiply num by 4 and ">>" divide num by 4