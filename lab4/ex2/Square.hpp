#pragma once
#include "Rectangle.hpp"

class Square : public Rectangle{
public:
    Square(const Point& p, double a) : Rectangle(p, a, a){}
};