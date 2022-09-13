//Solution for exercise 1.20, 1.21, 1.22
#include<iostream>
#include"Sales_item.h"

int main() {

    Sales_item item1, item2;

    while(std::cin >> item2) {
        item1 += item2;
        std::cout << item1 << std::endl;
    }

    std::string exitStr;
    std::cout << "Press x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}