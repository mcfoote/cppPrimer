//Solution to exercise 1.16
#include<iostream>

int main() {

    int sum = 0;
    int value = 0;

    while(std::cin >> value) {
        sum += value;
    }

    std::cout << "The Sum is: " << sum << std::endl;

    return 0;

}