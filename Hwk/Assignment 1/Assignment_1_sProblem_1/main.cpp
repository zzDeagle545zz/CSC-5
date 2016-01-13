
/* 
 * File:   main.cpp
 * Author: zzDeagle545zz
 *
 * Created on January 10, 2016, 10:00 PM
 * Function: Savitch One
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int vOne,vTwo; //The inputs
//Gather the inputs
    cout<<"What is the first Integer(-4000 to 4000)?"<<endl;
    cin>>vOne;

    cout<<"What is the second Integer (-4000 to 4000)"<<endl;
    cin>>vTwo;
//The Operation
    cout<<vOne<<"+"<<vTwo<<"="<<vOne+vTwo<<endl;
    cout<<vOne<<"x"<<vTwo<<"="<<vOne*vTwo<<endl;
    return 0;
}

