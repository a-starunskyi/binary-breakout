// This program should define a variable for each of the fundamental data types in C++ (int, char, bool, float, double).
// You should assign a value to each variable and print the variables out.

#include <iostream>
using namespace std;

int main() {
    //i defined variables right after creating instead
    // int someRandomInt;
    // someRandomInt = 4080;
    //cuz i think its a lot simplier
    int someRandomInt = 4080;
    char someRandomChar = 'S';
    bool someRandomBool = false;
    float someRandomFloat = 3.14;
    double someRandomDouble = 2.647145;

    cout << "Integer: " << someRandomInt << endl;
    cout << "Character: " << someRandomChar << endl;
    cout << "Boolean: " << boolalpha << someRandomBool << endl; //also i learnd that if you use "boolalpha" console outputs (false,true) instead (0,1)
    cout << "Float: " << someRandomFloat << endl;
    cout << "Double: " << someRandomDouble << endl;
    

    return 0;
}