#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>

class ComplexNumber{
public:
    double x, y;

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);

    ComplexNumber(double x=0.0, double y=0.0) : x(x), y(y){}

    ComplexNumber& operator+=(const ComplexNumber& c){
        x+=c.x;
        y+=c.y;
        return *this;
    }

    ComplexNumber operator+(const ComplexNumber& c) const{
        ComplexNumber result = *this;
        return result+=c;
    }

    ComplexNumber& operator-=(const ComplexNumber& c){
        x-=c.x;
        y-=c.y;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& c) const{
        ComplexNumber result = *this;
        return result-=c;
    }

    ComplexNumber& operator*=(const ComplexNumber& c){
        const auto newRe = x * c.x - y * c.y;
        const auto newIm = x * c.y + y * c.x;
        x = newRe;
        y = newIm;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& c) const{
        ComplexNumber result = *this;
        return result*=c;
    }

    ComplexNumber& operator/=(const ComplexNumber& c) {
        const auto denominator = c.x * c.x + c.y * c.y;
        if (denominator == 0) {
            throw std::domain_error("Dzielenie przez zero zespolone");
        }
        const auto newRe = (x * c.x + y * c.y) / denominator;
        const auto newIm = (y * c.x - x * c.y) / denominator;
        x = newRe;
        y = newIm;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& c) const{
        ComplexNumber result=*this;
        return result/=c;
    }

    bool operator==(const ComplexNumber& c) const{
        return x==c.x && y==c.y;
    }

    bool operator!=(const ComplexNumber& c) const{
        return !(x==c.x && y==c.y);
    }
};

 inline std::ostream& operator<<(std::ostream& os, const ComplexNumber& c){
    os << c.x << (c.y >= 0 ? " + " : " - ") << std::abs(c.y) << "i";
    return os;
 }