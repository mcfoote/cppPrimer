#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() { 
    
    string str = "some string";

    cout << str;

    for(int i = 0; i < str.length(); i++) {
        str[i] = 'X';
    }

    cout << str;

    string str2 = "some string";

    cout << str2;

    int j = 0;
    while(j < str2.length()) {
        str2[j] = 'X';
        j++;
    }

    cout << str2;

}