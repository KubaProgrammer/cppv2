#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>

class ComplexNumber {
public:
    double re;
    double im;

    ComplexNumber(double r = double{}, double i = double{}) : re(r), im(i) {}

    ComplexNumber& operator+=(const ComplexNumber& other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    ComplexNumber operator+(const ComplexNumber& other) const {
        auto result = *this;
        result += other;
        return result;
    }

    ComplexNumber& operator-=(const ComplexNumber& other) {
        re -= other.re;
        im -= other.im;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        auto result = *this;
        result -= other;
        return result;
    }

    ComplexNumber& operator*=(const ComplexNumber& other) {
        const auto newRe = re * other.re - im * other.im;
        const auto newIm = re * other.im + im * other.re;
        re = newRe;
        im = newIm;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        auto result = *this;
        result *= other;
        return result;
    }

    ComplexNumber& operator/=(const ComplexNumber& other) {
        const auto denominator = other.re * other.re + other.im * other.im;
        if (denominator == 0) {
            throw std::domain_error("Dzielenie przez zero zespolone");
        }
        const auto newRe = (re * other.re + im * other.im) / denominator;
        const auto newIm = (im * other.re - re * other.im) / denominator;
        re = newRe;
        im = newIm;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        auto result = *this;
        result /= other;
        return result;
    }

    bool operator==(const ComplexNumber& other) const {
        return re == other.re && im == other.im;
    }

    bool operator!=(const ComplexNumber& other) const {
        return !(*this == other);
    }

    ComplexNumber& operator+=(double scalar) {
        re += scalar;
        return *this;
    }

    ComplexNumber operator+(double scalar) const {
        auto result = *this;
        result += scalar;
        return result;
    }

    ComplexNumber& operator-=(double scalar) {
        re -= scalar;
        return *this;
    }

    ComplexNumber operator-(double scalar) const {
        auto result = *this;
        result -= scalar;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& value) {
        os << value.re << (value.im < 0 ? " - " : " + ")
           << std::abs(value.im) << "i";
        return os;
    }
};
