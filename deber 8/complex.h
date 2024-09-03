#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class Complex {
public:
   explicit Complex(double = 0.0, double = 0.0); // constructor
   Complex operator+(const Complex&) const; // addition
   Complex operator-(const Complex&) const; // subtraction

   // agregados
   Complex operator*(const Complex&) const;
   Complex operator/(const Complex&) const;
   bool operator>(const Complex&) const;
   friend ostream& operator<<(ostream&, const Complex&); //output
   friend ostream& operator>>(ostream&, const Complex&); //input

   string toString() const;
private:
   double real; // real part
   double imaginary; // imaginary part
};

#endif // COMPLEX_H_INCLUDED
