#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char &ch : str) {
        ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    }

    cout << "Uppercase String: " << str << endl;

    return 0;
}
