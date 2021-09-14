/*
Author      :   Drained Barrel
Description :   for loop 
Date        :   23/07/2021
*/

#include <iostream>
using std::cout;

//common modifiers: 
//signed, unsigned, short, long, long long

int main () {

    //character type modifications 
    char c = 'a';                   //8 bits
    unsigned char uc = 'a' + 128;   //8 bits
    signed char sc = 'a' + 128;     //highest bit reserved for a sign, size the same as uchar 

    cout << c << ", " << (int)uc << ", " << (int)sc << "\n";
    cout << "sizeof char: " << sizeof c << "\n";


    //integer 
    int i;          // 16 bit ingeter
    short int si;   // 8 bit integer 
    short s;        //implies short int 8 bit
    long int li;    // 32 bit 
    long l;         //implies long int 32 bit
    unsigned long long int ulli;    // 64 bit

    cout << "sizeof int: " << sizeof i << "\n";
    cout << "sizeof short: " << sizeof s << "\n";
    cout << "sizeof long int: " << sizeof li << "\n";
    cout << "sizeof long long int: " << sizeof ulli << "\n";


    //double 
    double d;           //64 bits
    long double ld;     //at least 64 bits
    //long lon double lld; //is not an option for double
      
    cout << "sizeof double: " << sizeof d << "\n";
    cout << "sizeof long double: " << sizeof ld << "\n";

    return 0;

}