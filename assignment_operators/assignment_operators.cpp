#include <iostream>
using std::cout;

//cpp equal sign = assign right hand side expresion r-value to left hand side expression called l-value

int main() {
    int l = 2 + 2;
    int l2 = 1 + 8;             //previous l as a left hand side becomes a right hand side 

    int l3 = l2 = 20;           //double assignment, mind that l2 is reassigned
    l3 = 40;
    cout << l << ", " << l2 << ", " << l3 << "\n";

    return 0;

}