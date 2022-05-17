/*
Zadacha: Area of triangle
*/

#include <iostream>

using namespace std;

int main() {
	int base, height;
	cout << "Enter base and height: "; cin >> base >> height;
	int area = (base * height) / 2;
	cout << endl << "Area: " << area;
	return 0;
}
