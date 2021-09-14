#include <iostream>
#include <vector>
#include <bitset>
using std::cout;
using std::vector;
using std::bitset;
using namespace std;

int main() {

    int *ptr = nullptr;
 
    // Below line compiles
    if (ptr) { cout << "true"; }   
    else { cout << "false"; }  

    auto str = u"Hello, world!"s;

    int tmp = 20 + 13 % 2 * 10 / 2 - 3;
    cout << "\ntmp result: " << tmp;

    int x = 0;
    int a = 5; 
    int b = 0;
    if (a>0 && b<0) {
        x = 5;
    } else if (a<0 || b>0) {
        x = 10;
    } else {
        x = 20;
    }
    cout << "\ncondition result: " <<  x;

    for (int i=0; i<10; i++) {
        cout << i << " ";
    }

    int i = 1;
    while (i<10) {
        i++;
        if(i % 2 == 0)
            continue;
        cout << i << " \n"; 
    }


    return 0;
}