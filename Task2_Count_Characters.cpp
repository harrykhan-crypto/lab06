#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Total Characters: " << str.length() << endl;

    return 0;
}
