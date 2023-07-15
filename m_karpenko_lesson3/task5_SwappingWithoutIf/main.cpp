#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer array of size 2 with the values 5 and 10
    
    int arrayOne[2] = { 5 , 5 };
    int arrayTwo[2] = { 10 , 10 };
    int tempNum = 0;

    cout << "Element at arrrayOne: " << arrayOne[0] << " " << arrayOne[1] << endl;
    cout << "Element at arrrayTwo: " << arrayTwo[0] << " " << arrayTwo[1] << endl;

    // 2. Swap the values of the two elements using a temporary variable
    
    tempNum = arrayOne[0];
    arrayOne[0] = arrayTwo[0];
    arrayTwo[0] = tempNum;

    cout << "Swap values" << endl;

    // 3. Print the result

    cout << "Element at arrrayOne: " << arrayOne[0] << " " << arrayOne[1] << endl;
    cout << "Element at arrrayTwo: " << arrayTwo[0] << " " << arrayTwo[1] << endl;

    return 0;
}