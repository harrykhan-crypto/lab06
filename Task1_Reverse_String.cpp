#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "Reversed String: " << str << endl;

    return 0;
}
