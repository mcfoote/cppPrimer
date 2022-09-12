//Solution to exercise 1.13
#include<iostream>

int main() {
    
    for(int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    //testing exit control
    std::string exitStr;
    std::cout << "Press x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}