#pragma once
#include "Figure.hpp"

class Circle : Figure{
private:
    double r;
public:
    Circle(const Point& p, double r) : Figure(p), r(r){}
    double area() const override{
        return 3.14*r*r;
    }
};