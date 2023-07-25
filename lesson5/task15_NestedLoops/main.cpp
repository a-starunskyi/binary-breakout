// Problem: Write a program that displays the multiplication table from 1 to 10 using nested loops.
#include <iostream>
using namespace std;

int main()
{
    const int ARRAY1_LEN = 10;
    const int ARRAY2_LEN = 10;

    int myNums1[ARRAY1_LEN] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int myNums2[ARRAY2_LEN] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Multiplying all numbers from 1 to 10: " << endl;

    for (int index1 = 0; index1 < ARRAY1_LEN; ++index1)
    {
        for (int index2 = 0; index2 < ARRAY2_LEN; ++index2)
        {
            cout << myNums1[index1] << " x " << myNums2[index2] \
                << " = " << myNums1[index1] * myNums2[index2] << endl;
        }
    }

    return 0;
}