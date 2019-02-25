// Push down automata simulation

#include <iostream>
#include <stack>
using namespace std;

void equal_10s() {
	char readchar;

	cout << "Please enter a binary string for testing 0^n 1^n (enter 'q' to end): " <<endl;
	do {
		cin >>readchar;

		//FIXME: Put code here

	} while (readchar == '0' || readchar == '1');
	
	//FIXME: Put code here

	cout << endl;
	return;
}

void equal_010s() {
	char readchar;

	cout << "Please enter a binary string for testing 0^n 1^m 0^n: (enter 'q' to end):" << endl;
	do {
		cin >> readchar;

		//FIXME: Put code here

	} while (readchar == '0' || readchar == '1');

	//FIXME: Put code here

	cout << endl;
	return;
}

int main() {

	char readchar;

	equal_10s();
	equal_010s();

	cout << "FIXME: put an ending statment here." << endl;

	cin >> readchar; //This is to keep screen open in some situations.

	return 0;
}