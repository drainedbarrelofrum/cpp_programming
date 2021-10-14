#include <iostream>
using std::cout;

//default function arguments 

int f(int a=1, int b=1, int c=1) {                          //if there already is an argument with default value, 
    cout << a << " * " << b << " * " << c << "\n";          //then every subsequent arguemnt also must have default value specified
    return a * b * c;
}

int main() {
    f(1, 2, 3);
    f();
    f(5);
    f(6,7);

    return 0;
}