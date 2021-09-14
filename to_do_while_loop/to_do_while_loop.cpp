#include <iostream>
#include <vector>
#include <bitset>
using std::cout;
using std::vector;
using std::bitset;

int main() {

    //do {...} while(expression condition);

    //simple do-while 
    int i = 10390;
    do {                                        //executing the code for the loop before checking the condition
        cout << bitset<16>(i) << "\n";          //it automatically enters the loop and execute at leaset one cycle of the loop
        i >>= 1;                                
    } while (i>0);
    cout << "\n";

    //do-while with an iterator 
    vector<int> v = { 55, 3, 1, 0, 0, 3, 343 };
    auto itr = v.begin();
    do {
        cout << *itr << " ";
        ++itr;
    } while (itr != v.end());
}