
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 19, 2016, 3:15 PM
 * Function:Inflation Prediction
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    float iCost,iPerc;//Price of pencils and Inflation Rate
    unsigned short yrs;
//Input Data
    cout<<"What is the price of the item?"<<endl;
    cin>>iCost;
    cout<<"What is percent of inflation?"<<endl;
    cin>>iPerc;
    cout<<"How many years from now?"<<endl;
    cin>>yrs;
//Converts percent
    iPerc/=100;
    for (unsigned short c=1;yrs>c;iCost+=iCost*iPerc,c++);
//Output results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The price of 200 pencils will be $"
        <<iCost<<" in "<<yrs<<" Years."<<endl;
        
    return 0;
}

