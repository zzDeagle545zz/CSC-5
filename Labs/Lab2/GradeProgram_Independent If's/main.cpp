
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
//Independent If's
    cout<<"Your grade was a";
    if(grd>=90)
        cout<<"n A.";
    if(grd>=80&&grd<90)
        cout<<" B.";
    if(grd>=70&&grd<80)
        cout<<" C.";
    if(grd>=60&&grd<70)
        cout<<" D.";
    if(grd<60)
        cout<<" F.";
    
    return 0;
}

