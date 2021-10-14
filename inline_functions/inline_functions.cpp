#include <iostream>
using std::cout;

// marking a functions indicates to the compiler to optimize that function 
// tradeoff between larger code and speed 

constexpr int f() {         // implicitly inlined as it is constexpr
    return 5;               // this tells the compiler to pre-process this function 
}

inline int g() {            // inlined as labeled like that 
    return 6;               // you want to use the inline only where it is meaningful 
}

int main() {

    cout << f() << "\n";
    cout << g() << "\n";

    return 0;
}