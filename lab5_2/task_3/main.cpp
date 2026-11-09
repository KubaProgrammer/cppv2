#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    kz::jpo::ComplexNumber<double> a(4.0, 5.0);
    kz::jpo::ComplexNumber<double> b(2.0, -3.0);
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
    kz::jpo::ComplexNumber<double> zero; std::cout << "default = " << zero << '\n';
    kz::jpo::ComplexNumber<int> ints1(4, 5), ints2(2, -3);
    kz::jpo::ComplexNumber<float> floats1(4.0f, 5.0f), floats2(2.0f, -3.0f);
    std::cout << "int: " << ints1 / ints2 << " (integer division)\n";
    std::cout << "float: " << floats1 / floats2 << '\n';
    std::cout << "double: " << a / b << '\n';
    // Intentionally does not compile: kz::jpo::ComplexNumber<std::string> text;
}
