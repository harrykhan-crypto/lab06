#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (!str.empty() && str.front() == str.back()) {
        cout << "First and Last Characters are Same" << endl;
    } else {
        cout << "First and Last Characters are Different" << endl;
    }

    return 0;
}
