#include <iostream>

using namespace std;

int main() {

    int myInt;

    // Prints to stdout (or terminal/screen)
    cout << "Enter your favorite number:\n";
    // Takes in input
    cin >> myInt;

    // cout can also be formatted
    cout << "Your favorite number is " << myInt << "\n";
    // prints "Your favorite number is <myInt>"

    cerr << "Used for error messages";


    return 0;

}