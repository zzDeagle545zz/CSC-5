
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 23, 2016, 8:39 PM
 * Function:Well storage REAL
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float PI=3.141;
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short wFt;//depth of well in ft, capacity of well in gallons
    float wRad,wGal;//Radius of well in inches
//Input Data
    cout<<"How wide is your well in inches?"<<endl;
    cin>>wRad;
    wRad/=24.0f;//conversion to ft and diameter to radius
    cout<<"How deep is your well in feet? Needs to be more than 50 ft"<<endl;
    cin>>wFt;
//Calculations
    wGal=PI*wRad*wRad*(wFt-50);
    wGal*=7.48;//conversion to gallons from ft^3
//Output Results
    cout<<"The well will contain "<<static_cast<unsigned short>(wGal)
        <<" gallons of water."<<endl;
    (wGal>250?cout<<"The family will have enough water for a day at worst."
                  <<endl:cout<<"The family will not have enough water for a day"
                  " at worst."<<endl);
    
    return 0;
}

