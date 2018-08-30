/*
 * CSE 1342 - Functions
 * Jake Carlson
 * 8/29/2018
 */
#include <iostream>
using namespace std;

int max(int, int);

int main()
{
    int x = 5;
    int y = 4;
    int z;

    // assign the max to z using a function
	z = max(x, y);
	cout << z << endl;

    return 0;
}

int max(int val1, int val2)
{
	return (val1 > val2) ? val1 : val2;
}