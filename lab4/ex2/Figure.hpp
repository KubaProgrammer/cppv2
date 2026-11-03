#pragma once
#include "Point.hpp"

class Figure{
public:
    Point p;
    Figure(const Point& p) : p(p){}
    virtual double area() const = 0;
};