#define NDEBUG 
#include <assert.h>
#include <iostream>
using std::cout;

void f(int *j){                         // takes int pointer j
    assert(j != nullptr);               // make sure it is not equal to nullptr
    cout << *j << "\n";                 // important not to dereference the nullptr
}

int main() {
    double i = 1.0;

    assert(i != 0.0);                     // another problem is e.g. division by 0 
    if(i!=0) { } 

    cout << 5.0 / i << "\n";

    int *k = nullptr;                   // ASSERTION SHOULD BE USED ONLY IN DEBUGGING
    //k = new int;
    //*k = 10;

    f(k);
    delete k;

    return 0;
}