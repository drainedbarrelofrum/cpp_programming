#include <iostream>
using std::cout;

//passing pointers to functions 

//f(value, pointer, reference to pointer)
void f(int a, int *b, int* &c) {
    a = 100;            //sets the value of int a to 100
    *b = 200;           //the value the b points to is set to 200 
    c = b;              //changes the pointer c to point to the same place as b is pointing to, c and be point to the same 
    b = &a;             //to show that the pointer doesn't change outside the function, pointer changed only within the function
}

int main() {
    int i = 10, j = 20, k = 30;
    int *y, *w;                         //integer pointers 
    y = &j;                             //y set to point to the place where value from j is stored, y will have the same address space as j and it will dereference the same value as k  
    w = &k;                             //w set to point to the place where value from k is stored, y will have the same address space as k and it will dereference the same value as k   

    //cout values and addresses 
    cout << "i, j, k: " << i << ", " << j << ", " << k << "\n";
    cout << "*y, *w: " << *y << ", " << *w << "\n";
    cout << "y, w: " << y << ", " << w << "\n";

    f(i, y, w);

    //cout values and addresses
    cout << "i, j, k: " << i << ", " << j << ", " << k << "\n";
    cout << "*y, *w: " << *y << ", " << *w << "\n";
    cout << "y, w: " << y << ", " << w << "\n";

    return 0;
}