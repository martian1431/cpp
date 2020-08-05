#include <iostream>

using namespace std;

//    typedef Declarations
typedef int feet;

enum color { red, green, blue } c;

int main() {
    cout << "Hello World" << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

//    typedef Declarations
    feet test = 65;
    cout << "typedef declaration: " << test << endl;

//    Enumerated Types
    return 0;
}
