
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 25, 2016, 3:26 AM
 * Function:Metal beam expansion Contraction problem
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
 
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short mLngth,cTemp;// material length, temp in celsius
    float cAlp,dLngth;//Displacement length, coefficient of linear expansion
//User input    
    cout<<"What is the length of the material(In meters)?"<<endl;
    cin>>mLngth;
    cout<<"What is the temperature of the material(In celsius)?"<<endl;
    cin>>cTemp;       
    cout<<"What is the coefficient of linear expansion?"<<endl;
    cin>>cAlp;        
//Calculation
    dLngth=cAlp*mLngth*cTemp;
    if(dLngth<0)
        dLngth=abs(dLngth);//test for negative
//Output results
    cout<<"The material will expand by "<<dLngth<<"m."<<endl;
            
    return 0;
}

