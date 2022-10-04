#include <iostream> // C++ standard I/O
#include <cstdio> // C-style standard I/O
//In C++, all standard functions, constants, types, and 
//objects are defined in the namespace std.
namespace Mygroup{
    int x;
    void printX() { std::cout << x << std::endl;}
}

int main(void){
    Mygroup::x = 10;
    Mygroup::printX();
    return 0;
}