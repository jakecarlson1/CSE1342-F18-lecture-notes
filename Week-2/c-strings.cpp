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

	cout << greeting << endl;

    return 0;
}

int ourStringLen(char str[]) 
{
	int i = 0;
	while (str[i] != '\0') {
		str[i] = 'a';
		i++;
	}
	return i;
}
