//
// Created by benmo on 9/30/2020.
//

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(int a, int b) {
    this->a = a;
    this->b = b;
}

ostream& operator<<(ostream& os, const ComplexNumber& cn) {
    os << cn.a << "+" << cn.b << "i";

    return os;
}

ComplexNumber operator+(const ComplexNumber& cna, const ComplexNumber& cnb) {
    return ComplexNumber(cna.a + cnb.a, cna.b + cnb.b);
}