/* 
 * File:   main.cpp
 * Author: rcc
 *Notes
 * Created on January 12, 2016, 6:06 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

      //if else statement
    //if(Condition)
    //true statement    
    //else
    //false statement
    
      //if independent
    //if condition 
    //chain if statements?
    
      //if(condition could compare with "&&" EX (compare 1)&&(compare 2)
    
    //logical operators
    //and operator &&
    //or operator 
    //not operator!
    //avoids nesting
    //follow order of operations 
    
    //{unique vars} starts a new block of code
    //indent new block
    
    //Use block with {} in if statements
    
    //Nesting can test multiple statements
    //INDENT
    
    //else if 
    //if 
    //else if
    //etc
    //else
    
    //menu
    //if/else if
    
    //validating data type
    //-range if else to test data type
    //scope is variable in a certain block
    //local block takes precedence over global or higher
    
    //comparing strings
    //strcmp use <string> <cstring>

    //conditional operator 
    //triary expression    
    //ex. hours=hours<5?5:hours;
    
    //switch statement 
    //switch(expression)//integer)
    //case 1
    //case 2
    //case 3 etc
    //needs a break
    //default 
    //without break it would be all inclusive and not jump out
    //menus with switches
    
    //test file opening errors
    
    //ternary operator
    //(score >= a?'A'://else
    //(score>=b?'A':
    //...........   :
    //implements one statement 
    
    //if else if has many implements
    
    //independent if each statement tests all
    //Needs a range for each one
     
    //switch
    //cant use ranges
    //gotta think
    
    //logic operators
    //xor has to be different for true value
    //xor sawp
    //a=a^b
    //b=a^b
    //a=a^b
    
    //works....number swap
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    
    //encryptions 
    //use the truth table
    //x^y   x^y^y gets x
    
    //truth table(Lab))
    // use ternary operator
    
    //<ctime> has time
    //<csdlib> has rand srand functions
    //srand(static_cast<unsigned int>)(time(0)))
    //rand()%61=18/range 18-78
    
    
    return 0;
}

