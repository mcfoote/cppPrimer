#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {

    string inputString;
    string concatString = "";

    while(getline(cin, inputString)) {
        concatString += " ";
        concatString += inputString;
    }

}