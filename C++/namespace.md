# C++
##a.What are the differences between C and C++?
```C++
#include <iostream> // Standard I/O
using namespace std; // reduce std::
int main(void)
{
    auto x = 0; // variable declaration
    cin >> x; // standard input
    x *= 1 + 2 * 3 / 4;
    cout << x << endl; // standard output
    return 0;
}
```
##b.In C++, we can group a set of variables, constants,
functions, and user-defined data types with a group
name.
```C++
#include <iostream>
namespace MyGroup{
    auto x = 0; // variable declaration
    void printX() { std::cout << x << std::endl; }
}
int main(void){
    MyGroup::x = 10;
    MyGroup::printX();
    return 0;
}
```
##c.In C++, all standard functions, constants, types, and
objects are defined in the namespace std.
```C++
#include <iostream> // C++ standard I/O
#include <cstdio> // C-style standard I/O
int main(void){
    int x = 0;
    std::scanf("%d", &x);
    std::printf("%d\n", x);

    std::cin >> x; // standard input
    std::cout << x; // standard output

    std::cout << std::endl; // newline and flush buffer
    std::cout << std::flush; // flush buffer
    std::cout << std::ends; // Insert null character

    int y = 0;
    std::cin >> x >> y;
    std::cout << x << ", " << y << std::endl;
    return 0;
}
```