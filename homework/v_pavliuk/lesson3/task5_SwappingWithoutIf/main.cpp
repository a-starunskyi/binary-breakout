#include <iostream>

using namespace std;

int main() {
    // TODO:
    // 1. Declare an integer array of size 2 with the values 5 and 10
    // 2. Swap the values of the two elements using a temporary variable
    // 3. Print the result

    int arrayOne[2] = { 5, 5 };
    int arrayTwo[2] = { 10, 10 };
    int temporaryNumber = 0;

    cout << "Element at arrrayOne: " << arrayOne[0] << " " << arrayOne[1] << endl;
    cout << "Element at arrrayTwo: " << arrayTwo[0] << " " << arrayTwo[1] << endl;

    temporaryNumber = arrayOne[0];
    arrayOne[0] = arrayTwo[0];
    arrayTwo[0] = temporaryNumber;

    cout << "Swap values" << endl;

    cout << "Element at arrrayOne: " << arrayOne[0] << " " << arrayOne[1] << endl;
    cout << "Element at arrrayTwo: " << arrayTwo[0] << " " << arrayTwo[1] << endl;

    return 0;
}