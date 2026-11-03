#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"

int main(){
    Point p(0, 0);
    Rectangle rectangle(p, 3, 6);
    Square square(p, 3);
    Circle circle(p, 5);

    std::cout<<"The area of rectangle is: "<<rectangle.area()<<std::endl;
    std::cout<<"The area of square is: "<<square.area()<<std::endl;
    std::cout<<"The area of circle is: "<<circle.area()<<std::endl;
}