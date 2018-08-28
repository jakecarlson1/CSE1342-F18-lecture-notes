/*
 * CSE 1342 - String Common Characters
 * Jake Carlson
 * 8/27/2018
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1;
    string word2;
    string commonChars;
    
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;

    // find the common characters
	for (int i = 0; i < word1.length(); i++) {
		for (int j = 0; j < word2.length(); j++) {
			if (word1.at(i) == word2.at(j)) {
				commonChars += word1.at(i);
			}
		}
	}

	// remove duplicates
	for (int i = 0; i < commonChars.length(); i++) {
		for (int j = i + 1; j < commonChars.length(); j++) {
			if (commonChars[i] == commonChars[j]) {
				// remove the character at j
			}
		}
	}

    cout << "The common characters are:" << endl;
    cout << commonChars << endl;
    
    return 0;
}
