#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// for loop is the most common loop allows you to go through sequence of statements alogn time the condition holds true

int main() {
    //informally 
    //for(init; condition; increment) { ... }

    //basic for loop 
    for (int i = 0; i<10; i++) {            //incerement i++ happens at the end of the loop 
        cout << i << " ";                   
    }
    cout << "\n\n";

    //multiple initializers
    for (int i=0, j=10; i<10; i++, j--) {
        cout << i << " " << j << ", ";
    }
    cout << "\n\n";

    //range-nased for over an array 
    int a[] = { 4, 3, 2, 1, 0, 5, 6, 7, 10, 9, 8};
    for (int i : a)                 //short hand, will loop over all integers in a
        cout << i << " ";
    cout << "\n\n";

    //container with an iterator 
    vector<int> vasprintf_l = { 10, 20, 30, 100, 60, 90, 80, 70, 50, 40 };
    for (auto itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << " ";
    }

    return 0;

}