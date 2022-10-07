# C++
## a. What are the differences between C and C++?
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
## b. In C++, we can group a set of variables, constants, functions, and user-defined data types with a group name.
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
## c. In C++, all standard functions, constants, types, and objects are defined in the namespace std.
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

## d. 
* Item Unqualified name
  * A name without any scope operator
  * 沒被const或volatile修飾的標識符(unqualified)
* Qualified name
  * A name with one or more scope operators
  * const和volatile屬於類型修飾符(qualifier)
```C++
#include <iostream>
int g = 0;
int main(void){
int x = 0;
std::cout << x; // x is a unqualified name
std::cout << g; // g is a unqualified name
std::cout << ::g; // g is a qualified name
std::cout << std::endl;
// std::cout and std::endl both are qualified names
return 0;
}
```

## e. 
* using namespace
  * Reduce the number of scope operators for a qualified name that belongs to a namespace
  ```C++
  #include <iostream>
  using namespace std;
  namespace MyGroup1{
    int x;
        namespace MyGroup2{
            void printX() {cout << x << endl; }
        }
  }
  using namespace Mygroup1;
  int main(void){
    x = 10; // Mygroup1::X
    MyGroup2::printX(); // Mygroup1::MyGroup1::MyGroup2::printX
    using namespace Mygroup2; // MyGroup1::MyGroup2::printX
    printX();   
  }
  ```

## f.
  * using qualified_name
    * Convert a qualified name to an unqualified name
```C++
#include <iostream>
int main(void){
    using std::cout;
    int x = 0;
    {
        using std::end;
        cout << x << endl; // OK
    }
    cout << x << endl; // compiling error
}
```

## g.
* Define an alias for a defined data type
    * typedef definedTypeName Alias;
            * typedef unsigned int uint;
            * typedef unsigned int nonnegative;
            * typedef unsigned int ui;
    * In C++11, use using instead of typedef
    * using alias = definedTypeName
        * using uint = unsigned;
        * using nonnegative = unsigned int;
        * using ui = unsigned int;
    * using supports the template types

* A literal is a value that is expressed as itself.
* A constant is a data type that substitutes a literal.
    * const double PI = 3.1415
    * PI is a constant, 3.1415 is a literal

