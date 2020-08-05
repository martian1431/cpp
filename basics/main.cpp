#include <iostream>
#include <time.h>

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

//The static Storage Class
static int count = 10; /* Global variable */
void func(void);
int max(int num1, int num2);
int sum(int a, int b = 20) {
    int result;
    result = a + b;

    return (result);
}

void pointers();
void pointerTopointer();

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues( int i ) {
    return vals[i];   // return a reference to the ith element
}

//The extern Storage Class
int count1 ;
extern void write_extern();

void changeValue(int ****pInt);

double getAverage(int *pInt, int i);

int *getRandom();

void swap_(int &a, int &i);

void reference();

int main() {
//    cout << "Hello World" << endl;

//    cout << "Size of char : " << sizeof(char) << endl;
//    cout << "Size of int : " << sizeof(int) << endl;
//    cout << "Size of short int : " << sizeof(short int) << endl;
//    cout << "Size of long int : " << sizeof(long int) << endl;
//    cout << "Size of float : " << sizeof(float) << endl;
//    cout << "Size of double : " << sizeof(double) << endl;
//    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

//    typedef Declarations
//    feet test = 65;
//    cout << "typedef declaration: " << test << endl;

//    Enumerated Types
//    c = blue;
//    cout << "Enumerated Type: " << red << endl;
//    cout << "Enumerated Type: " << green << endl;
//    cout << "Enumerated Type: " <<  blue << endl;

//
    // Variable definition:
//    int a, b;
//    int d;
//    float f;

    // actual initialization
//    a = 10;
//    b = 20;
//    d = a + b;

//    cout << d << endl ;

//    f = 70.0/3.0;
//    cout << f << endl ;

    //Constants/Literals
//    cout << "Hello\tWorld\n\n";

//    int area;

//    area = LENGTH * WIDTH;
//    cout << area;
//    cout << NEWLINE;

//     Modifier Types
//    short int i;           // a signed short integer
//    short unsigned int j;  // an unsigned short integer

//    j = 50000;
//
//    i = j;
//    cout << i << " " << j;

//    The static Storage Class
//    while(count--) {
//        func();
//    }

//    The extern Storage Class
//    count1 = 5;
//    write_extern();

//    function
//    cout << max(30, 79) << endl;

//    Call Type
    // local variable declaration:
//    int aa = 100;
//    int bb = 200;
//    int result;

    // calling a function to add the values.
//    result = sum(aa, bb);
//    cout << "Total value is :" << result << endl;

    // calling a function again as follows.
//    result = sum(aa);
//    cout << "Total value is :" << result << endl;

//    pointers
//    pointers();
//    pointerTopointer();
//    int balance[5] = {1000, 2, 3, 17, 50};
//    double avg;
//
//    avg = getAverage( balance, 5 ) ;
//    cout << "Average value is: " << avg << endl;
//    for (int i = 0; i < 5; ++i) {
//        cout << "value is: " << balance[i] << endl;
//    }
//    int *p;
//
//    p = getRandom();
//    for ( int i = 0; i < 10; i++ ) {
//        cout << "*(p + " << i << ") : ";
//        cout << *(p + i) << endl;
//    }

//  References
    // local variable declaration:
//    int a = 100;
//    int b = 200;
//
//    cout << "Before swap, value of a :" << a << endl;
//    cout << "Before swap, value of b :" << b << endl;
//
//    /* calling a function to swap the values.*/
//    swap_(a, b);
//
//    cout << "After swap, value of a :" << a << endl;
//    cout << "After swap, value of b :" << b << endl;
//    return 0;

//Returning values by reference in
    reference();

}

void reference() {
    cout << "Value before change" << endl;
    for ( int i = 0; i < 5; i++ ) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23; // change 2nd element
    setValues(3) = 70.8;  // change 4th element

    cout << "Value after change" << endl;
    for ( int i = 0; i < 5; i++ ) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

}

void swap_(int &x, int &y) {
    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */
}

int *getRandom() {
    static int  r[10];

    // set the seed
    srand( (unsigned)time( NULL ) );

    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

double getAverage(int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
        arr[i] += 1; //testing
    }
    avg = double(sum) / size;

    return avg;
}

void pointerTopointer() {
    int  var;
    int  *ptr;
    int  **pptr;
    int ***ppptr;

    var = 3000;

    // take the address of var
    ptr = &var;

    // take the address of ptr using address of operator &
    pptr = &ptr;

    ppptr = &pptr;

//    Passing Pointers to Functions
    changeValue(&ppptr);


    // take the value using pptr
    cout << "Value of var :" << var << endl;
    cout << "Value available at *ptr :" << *ptr << endl;
    cout << "Value available at **pptr :" << **pptr << endl;
    cout << "Value available at ***pptr :" << ***ppptr << endl;
}

void changeValue(int ****pInt) {
    ****pInt = 666;

}

void pointers() {
    int  var1;
    char var2[10];
    int  var = 20;   // actual variable declaration.
    int  *ip;        // pointer variable

    ip = &var;

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
}


int max(int num1, int num2) {
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

// Function definition
void func( ) {
    static int i = 5; // local static variable
    i++;
    std::cout << "i is " << i ;
    std::cout << " and count is " << count << std::endl;
}
