#include <iostream>
using std::cout;

//cpp compound assignment operators allow you to perform arithmetic or bitwise operations 
//on a variable and assign the result to the same variable

int main() {

    int i = 10;
    cout << i << "\n";
    i += 10;                //compound operator which is equivalent to i = i + 10;
    cout << "i+=10: " << i << "\n";
    cout << "i-=2: " << (i -= 2) << "\n";           //i = i -2;
    cout << "i*=4: " << (i *= 4) << "\n";           //i = i * 4;
    cout << "i/=2: " << (i /= 2) << "\n";           //i = i / 2;
    cout << "i%=9: " << (i %= 9) << "\n";           //i = i % 9;
    cout << "i<<=2: " << (i <<= 2) << "\n";         //i = i << 2;
    cout << "i>>=1: " << (i >>= 1) << "\n";         //i = i >> 1;
    cout << "i&=0b00001111: " << (i &= 0b00001111) << "\n";
    cout << "i^=0b10101010: " << (i ^= 0b10101010) << "\n";
    cout << "i|=7: " << (i |= 7) << "\n";           //7 = 0b111

    return 0;

}