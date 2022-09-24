#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    
    for(int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    //testing exit control
    string exitStr;
    cout << "Press x to exit" << endl;
    cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}