#include <iostream>
#include <string>
using std::cout;
using std::string;

// f(value, reference, reference to an array)
void f(int a, int &b, int(&c)[100]) {           //int(&c)[100] is reference to an array
    a = 1000;          
    b = 5000;
    c[0] = 5555;
}

void g(const double &d) {
    //d = 1.0;      // error: cannot change value of const ref.
                    // we can use it, disply it, cannot change the value inside that function
                    // prevent from accidental modification 
}

//passing by value
void f(string m) {
    cout << "&m from 'f': " << &m << "\n";          // display memory location of m 
    m = "Hi, Earth!\n";
}
/* importnat to know what it is going to happen when passing reference to object 
if you pass a big object (bit string) and you pass it by value, it needs to create a copy of that string which passed to the function
hence, you would duplicate that and consume more memory than needed
*/

//by reference
void fr(string &m) {
    cout << "&m from 'fr': " << &m << "\n";
    m = "Hi, Earth!\n";
}


int main() {
    int a = 1, b = 2, c[100];
    c[0] = 10;
    f(a, b, c);
    cout << "a, b, c[0]: " << a << ", " << b << ", " << c[0] << "\n";

    string ms = "Hello, World!";
    cout << "&ms: " << &ms << "\n";         //output the address of ms

    f(ms);      //by value
    cout << "ms: " << ms << "\n";           //passed by value, ms should not be
                                            //after calling the function f, the ms should not be changed 
                                            //since anything what is happening to the ms inside the function
                                            // it is happening to the copy of the ms which is being created 
                                            // when passed as a value, not the original object

    fr(ms);      //by references
    cout << "ms: " << ms << "\n";           // since passed as referrence, the function will modify that object 
                                            // which was referred by the referrence 
                             
    return 0;
}