//Solution to exercise 2.8
#include<iostream>

int main() {

    std::cout << "2\tM\n";

    std::string exitStr;
    std::cout << "Press x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }

}