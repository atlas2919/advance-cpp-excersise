#include <string>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
   : real{realPart}, imaginary{imaginaryPart} { }

// addition operator
Complex Complex::operator+(const Complex& operand2) const {
   return Complex{real + operand2.real, imaginary + operand2.imaginary};
}

// subtraction operator
Complex Complex::operator-(const Complex& operand2) const {
   return Complex{real - operand2.real, imaginary - operand2.imaginary};
}

// return string representation of a Complex object in the form: (a, b)
string Complex::toString() const {
   return "("s + to_string(real) + ", "s + to_string(imaginary) + ")"s;
}
// agregados

Complex Complex::operator*(const Complex& operand2) const{
    return Complex{real * operand2.real - imaginary * operand2.imaginary, real * operand2.imaginary + imaginary * operand2.real};
}

Complex Complex::operator/(const Complex& operand2) const{
    double denominator = operand2.real * operand2.real + operand2.imaginary * operand2.imaginary;

    return Complex{(real * operand2.real + imaginary * operand2.imaginary)/denominator,
                   (imaginary * operand2.real - real * operand2.imaginary)/denominator};
}

bool Complex::operator>(const Complex& operand2) const {
   double magnitude1 = real * real + imaginary * imaginary;
   double magnitude2 = operand2.real * operand2.real + operand2.imaginary * operand2.imaginary;
   return magnitude1 > magnitude2;
}

ostream& operator<<(ostream& output, const Complex& complex) {
   output << complex.toString();
   return output;
}

istream& operator>>(istream& input, Complex& complex) {
   double realPart, imaginaryPart;
   input >> realPart >> imaginaryPart;
   complex = Complex(realPart, imaginaryPart);
   return input;
}
