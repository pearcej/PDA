// Push down automata simulation

#include <iostream>
#include <stack>
using namespace std;

void equal_10s() {
	char readchar;

	cout << "Please enter a binary string for testing 0^n 1^n: ";
	do {
		cin.get(readchar);
		cout << readchar;
	} while (readchar != '\n' && readchar != '\r' && readchar != '\0');
	//FIXME: Put code here
	cout << endl;
	return;
}

void equal_010s() {
	char readchar;

	cout << "Please enter a binary string for testing 0^n 1^m 0^n: ";
	do {
		cin.get(readchar);
		cout << readchar;
	} while (readchar != '\n' && readchar != '\r' && readchar != '\0');
	//FIXME: Put code here
	cout << endl;
	return;
}

int main( ){

	char readchar;

	equal_10s();
	equal_010s();

	cin >> readchar; //This is to keep screen open in some situations.

	return 0;
}

