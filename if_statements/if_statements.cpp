#include <iostream>
using std::cout;

//cpp if statement allows you to control the flow of your program 
//make decision what to execute based on the condition evaluation 

int main() {
    int i = 10;
    bool b = true;

    if (i == 10)
        cout << "i is 10 \n";           //if there is only on line, no braces needed
    else 
        cout << "i is not 10 \n";

    if (i>0) {
        cout << "i > 0\n";
    }
    else if (i < 0) {
        cout << "i < 0 \n";
    }
    else { //i ==0
        cout << "else ... i==0 \n";
        if (!b) {       // !b is equivalent to b=false 
            cout << "b is false \n";
        }
        else {
            cout << "else b is true \n";
        }
    }

    return 0;
}
