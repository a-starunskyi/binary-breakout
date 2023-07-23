// Problem: Write a program that sums all elements of a two-dimensional array using nested loops.

	// TODO: Populate the array

	// TODO: Implement nested loops to sum and display the sum of all elements of the array
	
#include <iostream>

using namespace std;

const int ROWS = 2;      
const int COLS = 2;     

int main() {

        // TODO: Populate the array

        // TODO: Implement nested loops to sum and display the sum of all elements of the array

    int arr[ROWS][COLS] = {
        { 1, 2, },
        { 3, 4, },
    };

        int sum = 0;

        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                sum += arr[i][j];
            }
        }
        cout << "Sum of all elements: " << sum << endl;

        return 0;
    }
