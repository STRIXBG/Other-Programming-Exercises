// Reverse Entered String

#include <iostream>
#include <string>

using namespace std;

int len(string str) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void reverse(string str) {
    string reversed;
    int length = len(str);
    for (int i = length; i >= 0; i--) {
        reversed += str[i];
    }
    cout << reversed;
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    reverse(str);
    return 0;
}
