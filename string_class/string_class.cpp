// C++ string class std library is array of characters
// in many aspects it acts as a std library container of characters
#include <iostream>
#include <string>
using std::cout;
using std::string;                      // string directly from std library
using namespace std::string_literals; // using namespace string_literals -- this will give us handy utility when creating strings with auto


int main() {
    //string creation
    string s1 = "Hello, World!";        // creating string with the help of the std strint library of array of 14 characters
    auto s2 = "Hi, Earth!"s;            // creating a string because of the suffix s -- that is part of the literals 
    cout << s1 << "\n";
    cout << s2 << "\n";

    //concatenate strings               
    const char* sep = " "; //space              // you can concatenate strings and char strings 
    s1 += sep + s2;                             // 
    cout << s1 << "\n";

    //find 
    cout << "Location of 'Hi' in s1: " << s1.find("Hi") << "\n";        // it returns a location the position of where it occurs

    //substring 
    string sub_str = s1.substr(7, 6);
    cout << "s1.substr(7,6): " << sub_str << "\n";


    //size/length 
    cout << "size: " << s1.size() << "\n";          // size gives compatibility with othe std library containers     
    cout << "length: " << s1.length() << "\n";      // size and length are otherwise equal 

    //iterate 
    for (auto itr = s1.begin(); itr != s1.end(); ++itr) {      //iteration over string char by char
        cout << *itr << " ";                                    //auto reference itr, declaring the iterator as auto as being lazy
    }                                                           //this loop will insert the space in between each character 
    cout << "\n";

    return 0;
}