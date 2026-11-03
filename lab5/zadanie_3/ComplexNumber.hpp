#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <type_traits>

namespace kz {
namespace jpo {

template<typename T>
requires std::is_arithmetic_v<T>
class ComplexNumber {
public:
    T re;
    T im;

    ComplexNumber(T r = T{}, T i = T{}) : re(r), im(i) {}

    ComplexNumber<T>& operator+=(const ComplexNumber<T>& other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    ComplexNumber<T> operator+(const ComplexNumber<T>& other) const {
        auto result = *this;
        result += other;
        return result;
    }

    ComplexNumber<T>& operator-=(const ComplexNumber<T>& other) {
        re -= other.re;
        im -= other.im;
        return *this;
    }

    ComplexNumber<T> operator-(const ComplexNumber<T>& other) const {
        auto result = *this;
        result -= other;
        return result;
    }

    ComplexNumber<T>& operator*=(const ComplexNumber<T>& other) {
        const auto newRe = re * other.re - im * other.im;
        const auto newIm = re * other.im + im * other.re;
        re = newRe;
        im = newIm;
        return *this;
    }

    ComplexNumber<T> operator*(const ComplexNumber<T>& other) const {
        auto result = *this;
        result *= other;
        return result;
    }

    ComplexNumber<T>& operator/=(const ComplexNumber<T>& other) {
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

    ComplexNumber<T> operator/(const ComplexNumber<T>& other) const {
        auto result = *this;
        result /= other;
        return result;
    }

    bool operator==(const ComplexNumber<T>& other) const {
        return re == other.re && im == other.im;
    }

    bool operator!=(const ComplexNumber<T>& other) const {
        return !(*this == other);
    }

    ComplexNumber<T>& operator+=(T scalar) {
        re += scalar;
        return *this;
    }

    ComplexNumber<T> operator+(T scalar) const {
        auto result = *this;
        result += scalar;
        return result;
    }

    ComplexNumber<T>& operator-=(T scalar) {
        re -= scalar;
        return *this;
    }

    ComplexNumber<T> operator-(T scalar) const {
        auto result = *this;
        result -= scalar;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber<T>& value) {
        os << value.re << (value.im < 0 ? " - " : " + ")
           << std::abs(value.im) << "i";
        return os;
    }
};

} // namespace jpo
} // namespace kz
