//
// Created by benmo on 9/30/2020.
//

#ifndef UNTITLED6_COMPLEXNUMBER_H
#define UNTITLED6_COMPLEXNUMBER_H

#include <fstream>

using  namespace std;

class ComplexNumber {
public:
    ComplexNumber(int a, int b);

    int a, b;
};

ostream& operator<<(ostream& os, const ComplexNumber& cn);

ComplexNumber operator+(const ComplexNumber& cna, const ComplexNumber& cnb);


#endif //UNTITLED6_COMPLEXNUMBER_H
