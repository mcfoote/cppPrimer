//Solution to exercise 1.11 and 1.19
#include<iostream>

int main() {

    int val1, val2, printVal;

    std::cout << "Please input two integers to specify print range" << std::endl;
    std::cin >> val1 >> val2;

    printVal = val1;

    if(val1 < val2) {
        while(printVal <= val2) {
        std::cout << printVal << std::endl;
        printVal++;
        }
    } else if(val1 > val2) {
        while(printVal >= val2) {
        std::cout << printVal << std::endl;
        printVal--;
        }
    } else {
        std::cout << printVal;
    }

    std::string exitStr;
    std::cout << "Press x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }

}
    