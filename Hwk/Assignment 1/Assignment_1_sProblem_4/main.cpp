
/* 
 * File:   main.cpp
 * Author: zzDeagle545zz
 *
 * Created on January 10, 2016, 11:42 PM
 * Function:Distance of FreeFall
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
short GRAVITY=-32; //Acceleration in ft/s/s
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
   unsigned short time;
//Gather time input
    cout<<"How long will the object fall in seconds? (65,534s Max)"<<endl;
    cin>>time;
//Operations
    cout<<"If the object falls for "<<time<<" seconds, then it will fall "
            <<(GRAVITY*(time*time))/2<<" feet!"<<endl;
    return 0;
}

