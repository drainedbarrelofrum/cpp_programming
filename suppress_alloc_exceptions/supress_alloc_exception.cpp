// in special cases like embedded systems or performance critical applications in HW 
// when timing is important 
// then we want to suppress allocation errors and handle them directly
// since throwing an exception with allocating free memory is not an option 
// suppress the exception with no throw

#include <iostream>         // to use cout
#include <string>           //
#include <exception>        //
#include <new>              // standard library new header to be able to nothrow
using std::cout;
using std::string;
using std::bad_alloc;
using std::nothrow;

int main() {
    try {
        int *t = new int;           // attempt to allocate memory
        delete t;                   // then we delete it
    }                       
    catch (bad_alloc e) {               // this will output if it fails to allocate the new int or if it fails to delete it
        cout << e.what() << "\n";
        return 1;
    }

    string *s = new(nothrow)string();           // allocating new string, but the nothrow is different version of delete
    if (s == nullptr) {                         // nothrow version returns C++ null pointer, so check it 
        cout << "memory allocation error on: s\n";
        return 1;
    }
    delete(nothrow, s);             // as the new created with nothrow, we should delte also wit nothrow

    char *c = new(nothrow) char[100];
    if (c == nullptr) {                 // instead of catching bad alloc, we check if c is truly the null pointer
        cout << "memory allocation error: c\n";
        return 1;
    }
    delete[](nothrow, c);       // double square brackets to delete array, 

    return 0;
} 