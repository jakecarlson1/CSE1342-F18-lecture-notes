/*
 * CSE 1342 - Do While
 * Jake Carlson
 * 8/29/2018
 */
#include <iostream>
using namespace std;

int main()
{
    char input;
    do {
        cout << "Input: ";
        cin >> input;
        cout << "Output: " << input << endl;

    } while (input != 'q');

    return 0;
}
