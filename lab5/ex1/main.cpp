#include <iostream>
#include "ComplexNumber.hpp"

int main(){
    ComplexNumber c1(8, 6);
    std::cout<<c1<<std::endl;
    ComplexNumber c2(12, -4);
    ComplexNumber c3=c1+c2;
    c2+=c1;
    std::cout<<c3<<std::endl;
    std::cout<<c2<<std::endl;
    ComplexNumber c4(34, -12);
    ComplexNumber c5=c4-c1;
    c4-=c1;
    std::cout<<c5<<std::endl;
    std::cout<<c4<<std::endl;
    ComplexNumber c6(3, 4);
    ComplexNumber c7(2, 6);
    ComplexNumber c8=c6*c7;
    c7*=c6;
    std::cout<<c7<<std::endl;
    std::cout<<c8<<std::endl;
    ComplexNumber c9(1, 1);
    ComplexNumber c10(2, 2);
    ComplexNumber c11=c10/c9;
    c10/=c9;
    std::cout<<c10<<std::endl;
    std::cout<<c11<<std::endl;
    ComplexNumber c12(8, 6);
    bool equal=c12==c1;
    bool inequal=c1!=c2;
    std::cout<<equal<<std::endl;
    std::cout<<inequal<<std::endl;
}