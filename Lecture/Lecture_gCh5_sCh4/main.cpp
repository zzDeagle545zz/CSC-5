/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 26, 2016, 5:25 PM
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
/*Functions
 * fstream library
 * 
 * modular programming 
 * breaking the program into smaller pieces
 * short blocks 50 lines and 80 colums
 * easy to debugg
 * Function call excutes
 * 
 * function definition 
 * return type 
 * parameter list name body
 * 
 * void doesnt return value
 * Call a fucntion use the name with ();
 * 
 * Function Prototypes
 * placed at the top and just defined
 * return values can return one piece of information
 * void function name(int); prototype
 * void function name (int num); actual function
 * function name (variable); call
 * 
 * return statemets should be at the bottom unless it is a short 
 * 
 * 
 * returning a boolean should be called a is...
 * 
 * 
 * static local variables \
 * keeps the value after leaving
 * like a global variable
 * static trouble shooting
 * 
 * Default arguments
 * are declared in the name
 * 
 * project
 * use all the constructs
 * all data types
 * validation
 * write to a file
 * random numbers
 * flowchart
 * write up
 *  libraries
 * global constants
 * string
 * char array
 * write and read
 * instruction from a file
 * 
 * reference Varibles as Parameteres
 * can change ithe varrible from the function
 * returning more than one value
 * not a copy
 * must be a variable
 * copy is faster reference is slower
 * for primative data types
 * void getfunction(int&, Int&); reference
 * doesnt have to return changes the value
 * can return more values in theory
 * return is only one number 
 * const int can protect reference variable 
 * 
 * 
 * Overloading function 
 * differnt parameters could have the same name
 * 
 * exit function leaves the program
 * stopps
 * cstdlib
 * exit(); function is cstdlib
 * can return a value
 * 
 * stubs and drivers
 * drivers
 * fucntion to test
 * a way to test software to manage loads of people / data
 * stubs
 * dummy function
 * tests portions of codes without fully working code
 * 
 * start=time to start timer 
 * enstop=time to end time
 * final=end-start
 * 
 * Arrays
 * weaker points of c++
 * good for viruses malware
 * 1D 2D 3D
 * column table tables
 * static array upto 500,000
 * char array
 * char name[size];
 * int name[size];
 * 
 * Static array doesn change
 * const int SIZE=10
 * int tests[SIZE];
 * always choose the largest size
 * faster than dynamic
 * to access info use subscript
 * array starts at 0-(n-1)
 * can be used for  a deck of cards
 * 
 * const in SIZE=5
 * int test[SIZE]= {} for everything sets it to zero
 * sizeof(quizzes)
 * size of int 
 * 
 * no bounds checking
 * 
 * model view controller
 * 
 * 
 * setw iomanip
 * 
 * char array could be a string
 * 
 * parallel arrays are used to adress the same index
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
    char string[5];
    char a,b,c,d;
    cin>>string;
    a=string[0];
    b=string[1];
    c=string[2];
    d=string[3];
    cout<<a<<b<<c<<d<<endl;
    cin>>string;
    
    return 0;
}

