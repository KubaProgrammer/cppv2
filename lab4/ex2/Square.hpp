#pragma once
#include "Rectangle.hpp"

class Square : public Rectangle{
public:
    Square(const Point& p, double a) : Rectangle(p, a, a){}
    void setSide(double side) {
        Rectangle::setDim(side, side);
    }
private:
    void setDim(double newA, double newB) override {}
};