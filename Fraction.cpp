#include "Fraction.h"

Fraction:: Fraction() {
    numerator = 1;
    denominator = 1;
}

int Fraction::GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int Fraction::simplifyFraction(int& a, int& b) {
    int gcd = GCD(a, b);
    a /= gcd;
    b /= gcd;
    return gcd;
}

int Fraction::getNumerator() const {
    return numerator;
}
int Fraction::getDenominator() const {
    return denominator;
}
void Fraction::setNumerator(int a) {
    numerator = a;
}
void Fraction::setDenominator(int b) {
    if (b != 0) {
        denominator = b;
    }
    else {
        cout << "Cannot divide by zero" << endl;
    }
}
void Fraction::display() const {
    cout << "Your fraction: " << numerator << " / " << denominator << endl;
}
void Fraction::addFractions(int a1, int b1, int a2, int b2, int& a3, int& b3) {
    a3 = a1 * b2 + a2 * b1;
    b3 = b1 * b2;
    simplifyFraction(a3, b3);
}
void Fraction::subtractFractions(int a1, int b1, int a2, int b2, int& a3, int& b3) {
    a3 = a1 * b2 - a2 * b1;
    b3 = b1 * b2;
    simplifyFraction(a3, b3);
}
void Fraction::multiplyFractions(int a1, int b1, int a2, int b2, int& a3, int& b3) {
    a3 = a1 * a2;
    b3 = b1 * b2;
    simplifyFraction(a3, b3);
}
void Fraction::divideFractions(int a1, int b1, int a2, int b2, int& a3, int& b3) {
    if (a2 == 0) {
        cout << "Cannot divide by zero" << endl;
    }
    a3 = a1 * b2;
    b3 = b1 * a2;
    simplifyFraction(a3, b3);
}

