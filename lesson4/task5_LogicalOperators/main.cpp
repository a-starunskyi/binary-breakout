// Problem5.cpp

#include <iostream>

int main() {
    bool a = false;
    bool b = false;
    cout << "Input true or false for bool a = ";
    cin >> a;
    cout << "Input true or false for bool b = ";
    cin >> b;
    cout << a << " NOT " << b; << " = " << (!a!b);
    cout << a << " AND " << b << " = " << (a && b);
    cout << a << " OR " << b << " = " << (a || b);

    return 0;
}
