
/* 
 * File:   main.cpp
 * Author: zzDeagle545zz
 *
 * Created on January 10, 2016, 10:50 PM
 * Function:Coin Star!
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
unsigned char QUARTER=25,NICKEL=5,DIME=10;//Value in Cents
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    unsigned short nckls,qutrs,dimes;//I have a lot of coins.
    int tSum;//If coins are at max, then it would exceed short range.
//How many coins input
    cout<<setw(20)<<"How many Nickels?(0-65535)"<<endl;
    cin>>nckls;
    cout<<"How many Dimes?(0-65535)"<<endl;
    cin>>dimes;
    cout<<"How many Quarters?(0-65535)"<<endl;
    cin>>qutrs;
//Operation for sum
    tSum=(qutrs*QUARTER)+(nckls*NICKEL)+(dimes*DIME);
    cout<<"With "<<nckls<<" Nickels,"<<dimes<<" Dimes, and "
            <<qutrs<<" Quarters you have "<<tSum<<" Cents!"<<endl;
//Conversion for Dollars
   // tSum/=100;
//Pretty
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Or $"<<static_cast<float>(tSum)/100<<endl;
    
    return 0;
}

