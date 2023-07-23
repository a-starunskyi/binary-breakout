#include <iostream>

using namespace std;

int main() {
    // TODO: Implement a loop using 'goto' to display numbers from 10 to 1

    int num = 10;

    loop_start:
        cout << num << " " <<  "\n";

        num--;
        if (num >= 1) 
        {
            goto loop_start;
        }

        cout << endl;
        return 0;
    }
