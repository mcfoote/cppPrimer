//Solution to exercise 1.9
#include<iostream>

int main() {

    int val = 50;
    int sum = val;

    while(val < 100) {

        std::cout << sum << std::endl;
        val++;
        sum = sum + val;
        
    }

    std::string exitStr;
    std::cout << "Press x to exit";
    std::cin >> exitStr;

    if(exitStr == "x") {
        return 0;
    }

}