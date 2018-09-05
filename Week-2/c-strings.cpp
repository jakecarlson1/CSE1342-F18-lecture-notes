/*
 * CSE 1342 - C-Strings
 * Jake Carlson
 * 9/5/2018
 */
#include <iostream>
#include <cstring>
using namespace std;

int ourStringLen(char[]);

int main()
{
    char greeting[16] = "Hello!";

    cout << greeting << endl;

	if (strlen(greeting) == ourStringLen(greeting)) {
		cout << "Strlen passed" << endl;
	}

    return 0;
}
