#include <iostream>
#include <bitset>
using std::cout;
using std::bitset;

//allows you to shift and perform logical operations at bit level 
//manipulate values by bit values 
//base2 binary world 
// 

int main() {
    //unary: 
    //<< left shift 
    // >> right shift
    //~ bitwise not 
    unsigned char b = 0b00001001;
    cout << "b: " << bitset<8>(b) << "\n";                  //8 bits from b 
    cout << "b << 2: " << bitset<8>(b << 2) << "\n";        //8 bits from b left shifted by 2 
    cout << "b >> 1: " << bitset<8>(b >> 1) << "\n";        //8 bits from b right shifted by 1 
    cout << "~b: " << bitset<8>(~b) << "\n";                //negation of b, i.e., all bits will be negated
    cout << "\n";

    //binary: 
    // & AND
    // | OR
    // ^ XOR
    unsigned char c = 0b10101101;
    cout << "  " << bitset<8>(c) << "\n& 00000111\n  --------\n  "
        << bitset<8>(c & 0b00000111) << "\n\n";

    cout << "  " << bitset<8>(c) << "\n| 11110000\n  --------\n  "
        << bitset<8>(c | 0b11110000) << "\n\n";

    cout << "  " << bitset<8>(c) << "\n^ 11110000\n  --------\n  "
        << bitset<8>(c ^ 0b11110000) << "\n";

    //precedence order: ~, <<, >>, &, ^, |    


}