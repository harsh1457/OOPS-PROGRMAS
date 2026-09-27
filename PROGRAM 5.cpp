#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    void read() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i\n";
        else
            cout << real << " - " << -imag << "i\n";
    }
    Complex add(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex subtract(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex multiply(const Complex &c) const {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }
    Complex divide(const Complex &c) const {
        double denom = c.real * c.real + c.imag * c.imag;
        if (denom == 0) {
            cout << "Division by zero error!\n";
            return Complex(0, 0);
        }
        return Complex((real * c.real + imag * c.imag) / denom,
                       (imag * c.real - real * c.imag) / denom);
    }
    Complex conjugate() const {
        return Complex(real, -imag);
    }
};
int main() {
    Complex c1, c2;
    cout << "Enter First Complex Number:\n";
    c1.read();
    cout << "Enter Second Complex Number:\n";
    c2.read();
    cout << "\nFirst: ";
    c1.display();
    cout << "Second: ";
    c2.display();
    cout << "\nAddition: ";
    c1.add(c2).display();
    cout << "Subtraction: ";
    c1.subtract(c2).display();
    cout << "Multiplication: ";
    c1.multiply(c2).display();
    cout << "Division: ";
    c1.divide(c2).display();
    cout << "Conjugate of First: ";
    c1.conjugate().display();
    return 0;
}
