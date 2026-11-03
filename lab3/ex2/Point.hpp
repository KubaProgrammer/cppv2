#pragma once
#include <iostream>

class Point{
public:
    int x, y;
    Point(int coord1, int coord2) : x(coord1), y(coord2){}
    void display(){
        std::cout<<"("<<x<<", "<<y<<")"<<std::endl;
    }
};