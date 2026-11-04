#pragma once
#include "Figure.hpp"
#include <iostream>

class Rectangle : public Figure{
private:
    double a, b;
public:
    Rectangle(const Point& p, double a, double b) : Figure(p), a(a), b(b){}
    double area() const override{
        return a*b;
    }

    virtual void setDim(double newA, double newB){
        if(newA>0 && newB>0){
            a = newA;
            b = newB;
        }else{
            std::cout<<"Dimensions cannot be negative or equal to 0."<<std::endl;
        }
    }
};