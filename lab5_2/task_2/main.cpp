#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    kz::jpo::ComplexNumber a(4.0, 5.0);
    kz::jpo::ComplexNumber b(2.0, -3.0);
    std::cout << "a = " << a << ", b = " << b << '\n';
    std::cout << "a+b = " << a+b << '\n';
    std::cout << "a-b = " << a-b << '\n';
    std::cout << "a*b = " << a*b << '\n';
    std::cout << "a/b = " << a/b << '\n';
    auto result = a; result += b; std::cout << "a+=b -> " << result << '\n';
    result = a; result -= b; std::cout << "a-=b -> " << result << '\n';
    result = a; result *= b; std::cout << "a*=b -> " << result << '\n';
    result = a; result /= b; std::cout << "a/=b -> " << result << '\n';
    std::cout << std::boolalpha;
    std::cout << "a==b: " << (a==b) << ", a!=b: " << (a!=b) << '\n';
    std::cout << "a+3.5 = " << (a+3.5) << ", a-3.5 = " << (a-3.5) << '\n';
    result = a; result += 3.5; std::cout << "a+=3.5 -> " << result << '\n';
    result = a; result -= 3.5; std::cout << "a-=3.5 -> " << result << '\n';
    kz::jpo::ComplexNumber zero; std::cout << "default = " << zero << '\n';
}
