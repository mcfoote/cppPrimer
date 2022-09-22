#include<iostream>

int main() {

    int i = 0, &r = i;
    auto a = r;
    
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;

    auto &g = ci;
    // auto &h = 42; // error
    const auto &j = 42;

    std::cout << "a: " << a;
    std::cout << "b: " << b;
    std::cout << "c: " << c;
    std::cout << "d: " << d;
    std::cout << "e: " << e;
    std::cout << "f: " << f;
    std::cout << "g: " << g;

    a = 42;
    b = 42;
    c = 42;
   // d = 42; //error
   // e = 42; //error
   // g = 42; //error

    std::cout << "a: " << a;
    std::cout << "b: " << b;
    std::cout << "c: " << c;
    std::cout << "d: " << d;
    std::cout << "e: " << e;
    std::cout << "f: " << f;
    std::cout << "g: " << g;
}