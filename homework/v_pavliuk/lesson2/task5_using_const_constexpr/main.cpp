#include <iostream>

constexpr float PI() { return 3.0 + 0.14159; }

using namespace std;

int main() {

     /*The main difference between constexpr and const is that variable defined as const 
     will never change its primitive value during the program execution,
     constexpr keeps value of the complex expression calculated at the compile time*/ 

    const int ConstNumber = 5;

    cout << "constant ConstNumber contains value: " << ConstNumber << endl;
    cout << "constexpr PI returns value: " << PI() << endl;
       

    return 0;
}