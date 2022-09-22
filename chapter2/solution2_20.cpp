#include<iostream>

int main() {
    int i = 42; // init i to 42
    int *p1 = &i; // init *p1 to point to i address
    *p1 = *p1 * *p1; // i = i * i
    std::cout << i << std::endl;

    //prevent application autoexit
    std::string exitStr;
    std::cout << "Enter x to exit" << std::endl;
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }
}