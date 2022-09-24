#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    int val1, val2, printVal;

    cout << "Please input two integers to specify print range" << endl;
    cin >> val1 >> val2;

    printVal = val1;

    if(val1 < val2) {
        while(printVal <= val2) {
        cout << printVal << endl;
        printVal++;
        }
    } else if(val1 > val2) {
        while(printVal >= val2) {
        cout << printVal << endl;
        printVal--;
        }
    } else {
        cout << printVal;
    }

    string exitStr;
    cout << "Press x to exit" << endl;
    cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }

}