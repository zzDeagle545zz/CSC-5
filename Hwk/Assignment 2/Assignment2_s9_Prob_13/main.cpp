
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 23, 2016, 9:05 PM
 * Function:BMR chocolate bar problem
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short wPnds,hInch,age,hInch2,cBar=230;//weight in pounds and height is inches
    float bmr;
    char Sex;//male or female 'M' 'F'
//User input
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"How tall are you?(In inches)"<<endl;
    cin>>hInch;
    cout<<"How much do you weigh(In pounds)?"<<endl;
    cin>>wPnds;
    cout<<"Male or female?M/F"<<endl;
    cin>>Sex;
//Calculations 
    if(Sex=='M'||Sex=='m'){
        bmr=66.0f+(6.3f*wPnds)+(12.9f*hInch)-(6.8f*age);
        cout<<"Your BMR is "<<bmr<<"."<<endl;
        bmr/=(cBar);
        static_cast<int>(bmr);
        hInch/=12;//for output in feet
        hInch=hInch%12;
        cout<<"For a "<<hInch<<" foot ";
        if(hInch2>0)
            cout<<hInch2<<", ";//pretty
        cout<<age<<" year old man weighing "<<wPnds<<" you can eat " 
            <<static_cast<int>(bmr)<< "chocolate bars!"<<endl;
       
    }
    else{
        bmr=655.0f+(4.3f*wPnds)+(4.7f*hInch)-(4.7f*age);
        cout<<"Your BMR is "<<bmr<<"."<<endl;
        bmr/=(cBar);
        hInch/=12;//for output in feet
        hInch2=hInch%12;
        cout<<"For a "<<hInch<<" foot ";
            if(hInch2>0)
            cout<<hInch2<<", ";//pretty
        cout<<age<<" year old woman weighing "
            <<wPnds<<" pounds, you can eat " 
            <<static_cast<int>(bmr)<< "chocolate bars!"<<endl;
       
    }
    
    
    
    return 0;
}

