#include <iostream>
#include <string>
using namespace std;


int main() {
    // TODO:
    // 1. Declare two strings: "Hello" and "World!"
      
    string h("Hello");
    string w("World");
    string hw;
     
    // 2. Concatenate these two strings with a space in between
     
    hw = h + " " + w;
     
    // 3. Print the result
      
    cout << "Concatenated two string: " << hw << endl;

    return 0;
}