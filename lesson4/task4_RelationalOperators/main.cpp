// Problem4.cpp

#include <iostream>
using namespace std;

int main() {
    // TODO:
    // 1. Ask the user to input three integers
    cout << "Enter three integers:" << endl;
    int num1 = 0, num2 = 0, num3 = 0
    cin >> num1;
    cin >> num2;
    cin >> num3;
    // 2. Use relational operators to determine the largest and smallest numbers among the inputs
    bool firstTheGreatest = (num1 > num2 && num1 > num3);
    bool secondTheGreatest = (num2 > num1 && num2 > num3);
    bool thirdTheGreatest = (num3 > num1 && num3 > num2);

    bool firstTheSmallest = (num1 < num2 && num1 < num3);
    bool secondTheSmallest = (num2 < num1 && num2 < num3);
    bool thirdTheSmallest = (num3 < num1 && num3 < num2);

    // 3. Print out these values
    cout << "If condition is valied then program write 1, if not 0" << endl;
    cout << "The first value is the greatest one: " << firstTheGreatest << endl;
    cout << "The second value is the greatest one: " << secondTheGreatest << endl;
    cout << "The third value is the greatest one: " << thirdTheGreatest << endl;

    cout << "The first value is the smallest one: " << firstTheSmallest << endl;
    cout << "The second value is the smallest one: " << secondTheSmallest << endl;
    cout << "The third value is the smallest one: " << thirdTheSmallest << endl;
    
    return 0;
}
