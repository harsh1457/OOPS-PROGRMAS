#include <iostream>
using namespace std;
class Complex
{
float real, imag;
public:
Complex(float r = 0, float i = 0)
{
real = r;
imag = i;
}
Complex operator+(Complex c)
{
    return Complex(real + c.real, imag + c.imag);
}
Complex operator-(Complex c)
{
    return Complex(real - c.real, imag - c.imag);
}
Complex operator*(Complex c)
{
    return Complex(real * c.real - imag * c.imag,
                   real * c.imag + imag * c.real);
}
Complex operator/(Complex c)
{
    float denominator = c.real * c.real + c.imag * c.imag;

    return Complex((real * c.real + imag * c.imag) / denominator,
                   (imag * c.real - real * c.imag) / denominator);
}
void display()
{
    cout << real;

    if (imag >= 0)
        cout << " + " << imag << "i";
    else
        cout << " - " << -imag << "i";

    cout << endl;
}

};

int main()
{
float r1, i1, r2, i2;
cout << "Enter real and imaginary parts of first complex number: ";
cin >> r1 >> i1;
cout << "Enter real and imaginary parts of second complex number: ";
cin >> r2 >> i2;
Complex c1(r1, i1), c2(r2, i2);
Complex sum = c1 + c2;
Complex difference = c1 - c2;
Complex product = c1 * c2;
cout << "\nAddition: ";
sum.display();
cout << "Subtraction: ";
difference.display();
cout << "Multiplication: ";
product.display();
if (r2 != 0 || i2 != 0)
{
    Complex quotient = c1 / c2;
    cout << "Division: ";
    quotient.display();
}
else
{
    cout << "Division is not possible (division by zero).\n";
}
return 0;
}
