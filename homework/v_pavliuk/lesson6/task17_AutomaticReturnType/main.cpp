// Problem: Write a function that uses automatic return type deduction to add two auto variables together.

// TODO: Write a function that uses automatic return type deduction

#include <iostream>

// Function that adds two auto variables together
auto add(auto a, auto b) {
    return a + b;
}

int main() {
    auto num1 = 5;
    auto num2 = 5;

    auto result = add(num1, num2);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

