
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 26, 2016, 2:08 AM
 * Function:Grade Program
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short grd;
//Input the grade
    cout<<"What was the score?(0-100)"<<endl;
    cin>>grd;
//Ternary Operator
    cout<<"Your grade was a";
    (grd>=90?cout<<"n A.":
    (grd>=80?cout<<" B.":
    (grd>=70?cout<<" C.":
    (grd>=60?cout<<" D.":
             cout<<" F."))));
    
    
    return 0;
}

