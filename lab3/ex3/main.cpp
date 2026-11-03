#include <iostream>
#include "Circle.hpp"

int main(){
    Point p(3, 7);
    Circle circle(3, p);
    std::cout<<"The area of this circle is: "<<circle.area()<<std::endl;
    circle.setRadius(7);
    std::cout<<"The area of new circle is: "<<circle.area()<<std::endl;
}