#include <iostream>
using std::cout;

// single function that can take a number of arguments and their types
// by declaring the same function but with different number of arguments and their types, we can overload
// mind that in cpp there is another way by using function templates

int f(int a, int b) {
    return a * b;
}

int f(int a, int b, int c) {
    return a * b * c;
}

double f(double a, double b) {
    return a * b;
}

double f(double a, double b, double c) {
    return a * b * c;
}

int main() {

    cout << f(2,2) << "\n";
    cout << f(2,2,2) << "\n";
    cout << f(1.5, 2.0) << "\n";
    cout << f(2.5, 2.0, 1.0) << "\n";
    cout << f(5, (int)2.0, 2) << "\n";
    cout << f((double)5, 2.0, (double)2) << "\n";

    return 0;
}