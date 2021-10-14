#include <iostream>
using std::cout;

//references allow you to establish allias for existing variable 

int main() {
    int i = 10, j = 100;
    int *p = &i;            //p is pointing to the same address as i 
    int &r = i;             //r becomes an allias for i

    //cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    //modify i;
    i = 20;

    //cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    //modify r
    r = 30;

    //cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    //modify p 
    p = &j;

    //cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    return 0;


}