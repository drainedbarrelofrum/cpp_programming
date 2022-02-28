#include <iostream>
using std::cout;

// 

int g_array[3] = { 0, 1, 2 };       //g_ means it is global function 
                                    // important for the functions scope

int &elementRef(int i) {
    return g_array[i];
}

int &badRef(int i) {
    int local_array[] = { 10, 20, 30 };              // flaw as declared as local array
    return local_array[i];                          // no gurantee that this reference will be valid when we decide to use it   
                                                    // not to do when returning references from function
}

void output_array() {               // just not to overwhelm our code with the same block of loop
    for (int i : g_array)
        cout << i << " " ;
    cout << "\n";
}

int main() {
    output_array();

    int v = elementRef(1);
    elementRef(2) = 10;
    output_array();
    v = 555;
    output_array();

    //bad form! 
    badRef(1) = 5;                  // try to set the first element to equal to 5 
    int w = badRef(1);              // after that function returns this array is no longer in scope
    cout << w << "\n";              // no guarantee that w is gonna contain anyhing 

    return 0;
}