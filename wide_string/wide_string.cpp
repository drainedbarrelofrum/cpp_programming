// for wide character types instead of basich ones 
// UTF-16 or UTF-32 can be then supported if needed
#include <string>              
#include <iostream>
using std::cout;            // regular cout cannot handle w string
using std::wcout;           // output function for w strings 
using std::string;
using std::wstring;         // for w strings

using namespace std::string_literals; // using namespace string_literals -- this will give us handy utility when creating strings with auto


int main() {
    cout << "sizeof char: " << sizeof(char) << "\n";                // 1 byte
    cout << "sizeof wchar_t: " << sizeof(wchar_t) << "\n";          // wide character type, lets se if it is UTF-8, 16 or 32, 1, 2, or 4 bytes
                                                                    // macOS with gcc seems to give 4 bytes
    wstring s1  = L"Hello, World!"s;
    auto s2 = L"Hi, Earth!"s;
    wcout << s1 << "\n";
    wcout << s2 << "\n";
    
    //size/length 
    cout << "size: " << s1.size() << "\n";
    cout << "length: " << s1.length() << "\n";
    
    return 0;
}