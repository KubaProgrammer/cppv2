#pragma once
#include "Point.hpp"
#include <cmath>

class Circle{
private:
    double* radius;
public:
    Point center;
    Circle(double r, Point p) : center(p){
        radius = new double;
        if (r<0){
            *radius = 0;
        }else{
            *radius = r;
        }
    }

    double getRadius() const {
        return *radius; 
    }

    void setRadius(double r){
        if (r>0){
            *radius = r;
        }
    }

    double area(){
        return 3.14*getRadius()*getRadius();
    }

    ~Circle(){
        delete radius;
    }
};