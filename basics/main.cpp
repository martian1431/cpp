#include <iostream>

using namespace std;

//    typedef Declarations
typedef int feet;

enum color { red=5, green=0, blue=9 } c;

// Variable declaration:
extern int a, b;
extern int d;
extern float f;

//Defining Constants
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

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
//    c = blue;
    cout << "Enumerated Type: " << red << endl;
    cout << "Enumerated Type: " << green << endl;
    cout << "Enumerated Type: " <<  blue << endl;

//
    // Variable definition:
    int a, b;
    int d;
    float f;

    // actual initialization
    a = 10;
    b = 20;
    d = a + b;

    cout << d << endl ;

    f = 70.0/3.0;
    cout << f << endl ;

    //Constants/Literals
    cout << "Hello\tWorld\n\n";

    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;

//     Modifier Types
    short int i;           // a signed short integer
    short unsigned int j;  // an unsigned short integer

    j = 50000;

    i = j;
    cout << i << " " << j;
    return 0;
}
