#include <iostream>
using std::cout;

//Precedence: C++ uses left-to-right operation 
//operations gets applied from left to right 
//1. 
//multiply: * 
//divide: / 
//modulus: %

//2. 
//addition: +
//subtraction: - 

int main() {

    int a;
    int b = 10;
    double x;
    double y = 3.6742;

    cout << "2 + 2 = " << 2 + 2 << "\n";

    //precedence 
    a = 120 - 5 % 2 * 10 + 100 / 10;
    cout << "120 - 5 % 2 * 10 + 100 / 10 = " << a << "\n";

    //force precedence with parentheses 
    a = (120 - 5) % 2 * (10 + 100) / 10;
    cout << "(120 - 5) % 2 * (10 + 100) / 10 = " << a << "\n";

    //implicit conversion: double and int 
    //a defined as an int, thus, the y double will get truncated -- cut off the decimal part 
    //int b is gonna behave like double automatically 
    a = y + b;
    x = y * b;
    cout << "a: " << a << "\n";
    cout << "x: " << x << "\n";

    return 0;   
}