
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
    grd/=10;
//Dependent If's
    cout<<"Your grade was a";
    switch(grd){
            case 10:
            case 9:
                cout<<"n A.";
                break;
            case 8:
                cout<<" B.";
                break;
            case 7:
                cout<<" C.";
                break;
            case 6:
                cout<<" D.";
                break;
            default:
                cout<<" F.";
                break;
    }           
    return 0;
}

