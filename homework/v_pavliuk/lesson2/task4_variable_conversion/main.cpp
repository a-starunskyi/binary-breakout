#include <iostream>

using namespace std;

int main() {

    int NumberInt = 9;

    double NumbDouble;

    NumbDouble = NumberInt;

    cout << "NumberInt = " << NumberInt << endl;
    cout << "Demonstrate implicit  conversion " << NumbDouble << endl;

    float FloatNumber = 1.75;
    int IntergerNumber = 0;

    IntergerNumber = FloatNumber;

    cout << "Float : " << FloatNumber << endl;
    cout << "Demonstrate explicit conversion: " << IntergerNumber << endl;

    long int LongNumber = 523532553252;
    short int ShortNumber = LongNumber;

    cout << "Long Number : " << LongNumber << endl;
    cout << "Show loss of data: " << ShortNumber << endl;

    return 0;
 
}