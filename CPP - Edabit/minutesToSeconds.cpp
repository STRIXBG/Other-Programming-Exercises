/*
Zadacha: Minuti do sekundi
*/

#include <iostream>

using namespace std;

int main() {
	int minutes;
	cout << "Enter minutes: "; cin >> minutes;
	int seconds = minutes*60;
	cout << endl << "Seconds: " << seconds;
	return 0;
}
