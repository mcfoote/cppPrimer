//Solution to exercise 1.4

#include<iostream>
#include<string>

int main() {

    int inp1, inp2;
    std::string exit;
    
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> inp1 >> inp2;
    std::cout << "The product of " << inp1 << " and " << inp2 << " is " << inp1 * inp2 << std::endl;

    return 0;
    
}