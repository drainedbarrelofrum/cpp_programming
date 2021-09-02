#include <iostream>
using std::cout;

int main() {

    //relational: 
    bool r = 5 < 4;
    bool s = 5 > 4;         //assignment
    bool t = 5 == 4.01;     //with implicit conversion, comparison
    bool u = 5 <= 4;
    bool v = 5 >= 4;

    cout << "5 < 4: " << (5 < 4) << "\n";       //parentheses important
    cout << "5 > 4: " << s << "\n";
    cout << "5 == 4.01: " << t << "\n";
    cout << "5 <= 4: " << u << "\n";
    cout << "5 >= 4: " << v << "\n";

    //logical: AND, OR, NOT
    cout << "true AND true: " << (true && true) << "\n";
    cout << "true AND false: " << (true && false) << "\n";
    cout << "true OR false: " << (true || false) << "\n";
    cout << "NOT true: " << (!true) << "\n";
    cout << "1 OR 0: " << (1 || 0 ) << "\n";

    //precedence: !, && , ||
    cout << "false || !false && true: " << (false || !false && true) << "\n";
    // first ! is applied 
    // then result of !false AND true is evaluated 
    // then the result of that is applied with false ||
    

    return 0;

}