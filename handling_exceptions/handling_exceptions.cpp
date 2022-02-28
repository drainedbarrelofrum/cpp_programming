#include <iostream>
#include <exception>
using std::cout;
using std::bad_alloc;           // exception class for handling allocation failures

/*
std:: exception types 

bad_alloc
bad_cast            // for dynamic cast failures
bad_exception       // 
bad_typeid              
bad_function_call     // for bad function calls
bad_weak_ptr          // for invalid weak pointer wrt shared pointer
*/

// 


// Java has this kind of try throw catch exception handling
// C doesn't have these
// in C we returned return calls or global error objects or global structs, and passed the things around by returning them 
// and looking at returned codes rather then catching 


int main() {

    try {               
        throw 5;                // the caught int will be 5 as it is the value which is thrown and it is an int
    }
    catch (int i) {         // catch the particular type of the exception we are looking for
        cout << "Caught exception:  " << i << "\n";
    }
    catch (...) {           // catching the exception of the unknown type, catch with ellipses (...) is the default exception handler
        cout << "Handle exception of unknown type. \n";    
    }

    try {                   // when you trying allocate more memory than you have, memory-constrained system
        int* myarray = new int[10];     // if very large int which would fail to allocate, we then catch the bad allocation exception

    }
    catch (bad_alloc& e) { // bad alloc is reference to e
        cout << "caught std::exception: " << e.what() << "\n";      //  exception has a function of what - that's gonna tell us what the exceptionw as 
    }

    return 0;
}