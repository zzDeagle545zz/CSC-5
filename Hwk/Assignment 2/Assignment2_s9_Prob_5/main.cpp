
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 19, 2016, 11:00 AM
 * Function:
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables 
    unsigned short rCap,cCap;
    char cont='Y';
//Input
    while(cont=='Y'||cont=='y'){
//loop response
        cout<<"What is the room capacity of this room?"<<endl;
        cin>>rCap;
        cout<<"What is the number of people attending the meeting?"<<endl;
        cin>>cCap;
        (rCap>=cCap?cout<<"It is legal to hold "<<cCap<<" people."<<endl
                :cout<<"The meeting can not take place due to fire regulations.")
                <<endl;
        cout<<"Would you like to continue? Y/N?"<<endl;
        cin>>cont;
    }

    
    
    return 0;
}

