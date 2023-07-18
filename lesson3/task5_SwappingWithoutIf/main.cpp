#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer array of size 2 with the values 5 and 10
    
    int first[2] = { 5, 5 };
    int second[2] = { 10, 10 };
    int temp = 0; 

    // 2. Swap the values of the two elements using a temporary variable
    
    temp = first [0];
    first[0] = second[0];
    second[0] = temp;

    // 3. Print the result
    cout << first[0] << " " << first[1] << endl;
    cout << second[0] << " " << second[1] << endl;

    return 0;
}