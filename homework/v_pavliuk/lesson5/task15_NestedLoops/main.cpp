// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.

#include <iostream>

using namespace std;

int main() {

    // TODO: Implement nested loops to display the multiplication table from 1 to 10

    const int maxNum = 10;

    cout << "Multiplication Table from 1 to 10: \n\n";
    for (int i = 1; i <= maxNum; ++i) {
        cout << "Table for " << i << ":\n";
        for (int j = 1; j <= maxNum; ++j) {
            cout << i << " x " << j << " = " << i * j << "\n";
        }
        cout << "\n";
    }

    return 0;
}
