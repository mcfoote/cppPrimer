#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
<<<<<<< HEAD

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

=======
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

>>>>>>> 221ac40683486aef179a7ea110611e900d4db50c
}