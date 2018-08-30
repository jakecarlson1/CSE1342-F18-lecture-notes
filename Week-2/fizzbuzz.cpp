/*
 * CSE 1342 - Fizz Buzz with If Else
 * Jake Carlson
 * 8/27/2018
 */
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) cout << "Fizz";
		if (i % 5 == 0) cout << "Buzz";
		if (i % 3 != 0 && i % 5 != 0) cout << i;
		cout << endl;
    }

    return 0;
}
