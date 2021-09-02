#include <iostream>

//void: empty type. "incomplete"
//cannot be initiated by its own 
//returns nothing or empty 
void myFunction() {}

int main() {

    //interesting types 
    void *v_ptr;        //with void pointer we can point to different pointer types without specifying the type of pointer we are working with 
    //std::nullptr_t: a typesafe definition of null
    v_ptr = nullptr;    //nullptr type is type safe definition of null
    bool b;             //no guarantee to be a specific size depends on system
    b = true;
    b = false;

    
    //common types 
    char c;         //
    int i;          
    double d;       //for floating numbers, decimal point numbers 


    //common modifiers: signed, unsigned, short, long, long long
    // 
    signed char sc;     //at least 8 bits 
    signed short ss;    //at least 16 bits 
    long int li;        //at least 32 bits 
    long long int lli; //at least 64 bits, it may vary from system to system 


    //character types 
    char c8;        //at least 8 bits (UTF-8)
    wchar_t wc;     //largest character set supported 
    char16_t c16;   //at least 16 bits (UTF-16)
    char32_t c32;   //at least 32 (UTF-32)


    //floating point types: IEEE-754 format 
    float f;        //typically 32 bits
    double db;      //typically 64-bits 
    long double ld;  //typically 80 bits

    return 0;

}
