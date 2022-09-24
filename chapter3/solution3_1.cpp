#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    int val = 50;
    int sum = val;

    while(val < 100) {

        cout << sum << endl;
        val++;
        sum = sum + val;
        
    }

    string exitStr;
    cout << "Press x to exit";
    cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }

}