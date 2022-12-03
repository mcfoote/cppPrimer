#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() { 

    string strinp;
    string strout;
    
    while (getline(strinp)) {

        for(auto c: strinp){
            if(!ispunct(strinp[c])){
                strout[c] = strinp[c];
            }
        }
    }

}