#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {

    string i1, i2;

    cout << "enter two strings to compare" << endl;
    getline(cin, i1);
    getline(cin, i2);

    if(i1 == i2) {
        cout << "the two strings are equal" << endl;
    } else if(i1.size() > i2.size()) {
        cout << "the first string is larger" << endl;
    } else if(i1.size() < i2.size()) {
        cout << "the second string is larger" << endl;
    } else cout << "the strings are the same size" << endl;

    //testing exit control
    string exitStr;
    cout << "Press x to exit" << endl;
    cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}