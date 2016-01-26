
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 19, 2016, 3:32 AM
 * Function: Worker Retro pay
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    int aSal,mSal;
    const float pInc=.076; //Percent of Pay Increase
    unsigned short rPay;
    char cont;
//User Input
    do{
        cout<<"What was your yearly salary?"<<endl;
        cin>>aSal;
//Calculate Numbers
        rPay=(aSal*pInc)/2;//Retro Pay
        aSal+=rPay*2;
        mSal=aSal/12;
//Output results
        cout<<"Your Retroactive Pay is "<<rPay<<"."<<endl;
        cout<<"Your new annual salary is "<<aSal<<"."<<endl;
        cout<<"Your new monthly salary is "<<mSal<<"."<<endl;
//Ask to loop
        cout<<"Would you like to continue?"<<endl;
        cout<<"Y/N?"<<endl;
        cin>>cont;  
    }
    while(cont=='Y'||cont=='y');
    
    
    return 0;
}

