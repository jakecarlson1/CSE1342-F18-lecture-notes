#include <iostream>
using namespace std;

void print_todos(string todos[], int size) {
	for (int i = 0; i < size; i++) {
		cout << i << ": " << todos[i] << endl;
	}
}

void resize(string *&array, int &size) {
	cout << "Resizing" << endl;
	int newSize = size * 2;
	string *temp = new string[newSize];

	for (int i = 0; i < size; i++) {
		temp[i] = array[i];
	}

	delete[] array;
	
	size = newSize;
	array = temp;
}

int main() {
	string *todos;
	int n = 0;
	int capacity = 10;
	string buffer;

	todos = new string[capacity];
	string *temp = new string;

	cout << "Enter item: ";
	while (getline(cin, buffer)) {
		cout << "New item: " << buffer << endl;
		
		todos[n] = buffer;
		n++;

		print_todos(todos, n);

		if (n == capacity) {
			resize(todos, capacity);
		}

		cout << "Enter item: ";
	}

	delete temp;
	delete[] todos;

	return 0;
}