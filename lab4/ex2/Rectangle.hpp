#pragma once
#include "Figure.hpp"

class Rectangle : public Figure{
private:
    double a, b;
public:
    Rectangle(const Point& p, double a, double b) : Figure(p), a(a), b(b){}
    double area() const override{
        return a*b;
    }
};