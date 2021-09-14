#include <iostream>
#include <bitset>
using std::cout;
using std::bitset;

int main() {
    for (unsigned char c = 15; c != 0; c>>=1) {
        cout << bitset<8>(c) << "\n";
    }

    return 0;
}