#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    int GCD(int a, int b);
    int simplifyFraction(int& a, int& b);
public:
    Fraction();
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int a);
    void setDenominator(int b);
    void display() const;
    void addFractions(int a1, int b1, int a2, int b2, int& a3, int& b3);
    void subtractFractions(int a1, int b1, int a2, int b2, int& a3, int& b3);
    void multiplyFractions(int a1, int b1, int a2, int b2, int& a3, int& b3);
    void divideFractions(int a1, int b1, int a2, int b2, int& a3, int& b3);
};