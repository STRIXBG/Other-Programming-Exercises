// Transfer to LowerCase

#include <iostream>
#include <string>

using namespace std;

string returnLowerCase(string str) {
    string lowerCase;
    for (int i = 0; str[i] != '\0'; i++) {
        if (int(str[i]) >= 41 && int(str[i]) <= 90) {
            int asciiLower = int(str[i]) + 32;
            char lower = asciiLower;
            lowerCase = lowerCase + lower;
        }
        else {
            lowerCase = lowerCase + str[i];
        }
    }
    return lowerCase;
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << endl << returnLowerCase(str);
    return 0;
}
