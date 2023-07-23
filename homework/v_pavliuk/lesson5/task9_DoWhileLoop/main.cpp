#include <iostream>

using namespace std;

int main() {
    int number;

    do 
    {
        cout << "Enter a number (enter 0 to stop): ";
        cin >> number;

        if (number != 0) 
        {
            cout << "You entered: " << number << endl;
        }

    } while (number != 0);

    cout << "You entered the number zero, the program ended" << endl;

    return 0;
}
