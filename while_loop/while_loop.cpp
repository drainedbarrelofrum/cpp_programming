#include <iostream>
using std::cout;

int main() { 
    //while (expression condition) {...}            
    //one-line whil eloop
    cout<< "One-line while loop: ";
    int i = 20;
    while (i >= 10)
        cout << i-- << " ";

    //compound statement 
    cout << "\n\nCompound statemnet: ";
    while (i >= 0) {
        cout << i << " ";
        i--;
    }  

    //declarative condition (assignment) 
    cout << "\n\nDeclarative codition (assignment): ";
    int a[] = {5, 10, 6, 4, 4, 2, 1, 1, 20, 0};
    int j = 0;
    while (int i = a[j++]) {
        cout << i << " ";
    }   

    //using continue
    cout << "\n\nUsing continue: ";
    i = 0;
    while (i<10) {
        i++;
        if (i % 2 == 0 )
            continue;
        cout << i << " " ;        
    }

    //breaking 
    cout << "\n\nBreaking: ";
    i = 1;
    while (i<10) {
        if (i % 7 == 0) 
            break;
        cout << i << " "; 
        i++;
    }
    cout << "\n\n";
    
    return 0;

}