#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer array of size 2 with the values 5 and 10
    int values[2] = { 5, 10 };
    // 2. Swap the values of the two elements using a temporary variable
    int tempor = values[0];
    values[0] = values[1];
    values[1] = tempor;

    // 3. Print the result
    cout << "Result: " << values[0] << " " << values[1] << endl;
    return 0;
}