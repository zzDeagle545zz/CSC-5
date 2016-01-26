
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 23, 2016, 7:45 PM
 * Function: Sound velocity and air temp
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int tStart, tStop;//range of temp
    float sVel;
//User input
    cout<<"What is the starting temp(C)?"<<endl;
    cin>>tStart;
    cout<<"What is the ending temp(C)?"<<endl;
    cin>>tStop;
//Loop and output results
    for(int c=tStart;c<=tStop;c++){
        sVel=331.3f+.61f*c;//calculate
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"At "<<c<<" degrees Celsius the velocity of sound is "
            <<sVel<<" m/s."<<endl;     
        
    }
    return 0;
}

