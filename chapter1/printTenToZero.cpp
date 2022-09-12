//Solution to exercise 1.10
#include<iostream>

int main() {
    
    int val = 10;

    while(val >= 0) {
        std::cout << val << std::endl;
        val--;
    }
    //testing exit control
    std::string exitStr;
    std::cout << "Press x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}