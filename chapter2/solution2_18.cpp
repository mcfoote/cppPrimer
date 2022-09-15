#include<iostream>

int main() {

    int val = 7, val2 = 12;
    int *p = &val;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    p = &val2;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 3;
    std::cout << val2 << std::endl;

    std::string exitStr;
    std::cout << "Enter x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}