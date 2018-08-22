/*
 * CSE 1342 - Static Cast
 * Jake Carlson
 * 8/22/2018
 */
 #include <iostream>
 using namespace std;
 
 int main()
 {
	char c = 'A';
	// prints B
	cout << (char)(c + 1) << endl;
	
	// prints 66
	cout << c + (char)1 << endl;

	return 0;
 }