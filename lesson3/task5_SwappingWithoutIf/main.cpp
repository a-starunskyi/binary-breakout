#include <iostream>

int main() {
    // we just need to swap this shit yea
    //that will be easy
    int someVariable[2] = { 5, 10 };

    //SO first we create new var, then set it to 5
    //then 5 becomes 10
    //hen 10 becomes that new var that we created at the start
    int someUsefulVariable = someVariable[0];
    someVariable[0] = someVariable[1];
    someVariable[1] = someUsefulVariable;

    std::cout << "Swapped that bad boy: [" << someVariable[0] << ", " << someVariable[1] << "]" << std::endl;

    return 0;
}
//damnnn that was not easy D: