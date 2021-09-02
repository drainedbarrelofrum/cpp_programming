#include <string>
using std::string;
using namespace std::string_literals;

int main() {

    //character prefixes: u8 ,L, u, U
    auto c = u8'a';     //
    auto c = L'a';
    auto c = U'a';

    //string suffic: s (from std::string_literals)
    auto s = "xyz";
    auto s = U"xyz"s;

    return 0;
}