/*
 * CSE 1342 - I/O and Variables
 * Jake Carlson
 * 8/20/2018
 */

// include cout and cin
#include <iostream>

using namespace std;

int main()
{
    // variables have two parts, a type and a name
    int val1;
    int val2;
    
    // cout     characters out
    // cin      characters in
    // >>       stream extraction operator
    // <<       stream insertion  operator
    cout << "Enter a number:";
    cin >> val1;
    cout << "Enter another number:";
    cin >> val2;

    // endl     write a new line
    cout << val1 << " + " << val2 << " " << val1 + val2 << endl;
    cout << val1 << " - " << val2 << " " << val1 - val2 << endl;
    cout << val1 << " * " << val2 << " " << val1 * val2 << endl;
    cout << val1 << " / " << val2 << " " << val1 / val2 << endl;

    return 0;
}
