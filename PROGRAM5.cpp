#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    cout << "Sum of 5 and 10 (int): " << calc.add(5, 10) << endl;
    cout << "Sum of 5, 10, and 15 (int): " << calc.add(5, 10, 15) << endl;
    cout << "Sum of 2.5 and 3.7 (double): " << calc.add(2.5, 3.7) << endl;
    return 0;
}
