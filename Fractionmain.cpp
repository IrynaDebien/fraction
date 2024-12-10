#include "Fraction.h"
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction frac1;

    int a1, b1;
    cout << "Enter the numerator of the first fraction: ";
    cin >> a1;
    frac1.setNumerator(a1);
    cout << "Enter the denominator of the first fraction: ";
    cin >> b1;
    frac1.setDenominator(b1);
    frac1.display();

    Fraction frac2;
    int a2, b2;
    cout << "Enter the numerator of the second fraction: ";
    cin >> a2;
    frac2.setNumerator(a2);
    cout << "Enter the denominator of the second fraction: ";
    cin >> b2;
    frac2.setDenominator(b2);
    frac2.display();

    a1 = frac1.getNumerator();
    b1 = frac1.getDenominator();
    a2 = frac2.getNumerator();
    b2 = frac2.getDenominator();

    int a3, b3;

    frac1.addFractions(a1, b1, a2, b2, a3, b3);
    cout << "Result of adding fractions: " << a3 << "/" << b3 << endl;
    frac1.subtractFractions(a1, b1, a2, b2, a3, b3);
    cout << "Result of subtracting fractions: " << a3 << "/" << b3 << endl;
    frac1.multiplyFractions(a1, b1, a2, b2, a3, b3);
    cout << "Result of multiplying fractions: " << a3 << "/" << b3 << endl;
    frac1.divideFractions(a1, b1, a2, b2, a3, b3);
    cout << "Result of dividing fractions: " << a3 << "/" << b3 << endl;

    return 0;
}
