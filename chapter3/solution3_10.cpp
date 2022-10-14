#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {

    string str, str2;
    getline(cin, str);

    cout << str << endl;

    for(auto &c : str) {
        if(!ispunct(c)) {
            str2 += c ;
        }
    }

    cout << str2 << endl;

}