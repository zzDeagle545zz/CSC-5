
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 25, 2016, 2:05 AM
 * Function: Class Grades for N input
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    unsigned short nExc,cSrc,tSrc,tFnl,cFnl;//number of problems and the scores
//Number of Problems
    cout<<"How many problems?"<<endl;
    cin>>nExc;
//For loop for all the problems
    for(unsigned short c=1;nExc>=c;c++){
        cout<<"Problem "<<c<<" score was?"<<endl;
        cin>>cSrc;
        cout<<"what was the total score?"<<endl;
        cin>>tSrc;
//Output results        
        cout<<"Score received for exercise "<<c<<": "<<cSrc<<endl;
        cout<<"Total points for exercise "<<c<<": "<<tSrc<<endl;
        cFnl+=cSrc;
        tFnl+=tSrc;
    }
//Calculate percent and output results 
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<endl<<"Your total is "<<cFnl<<" out of "<<tFnl<<", or "
        <<static_cast<float>(cFnl)/tFnl*100<<"%"<<endl;
    
    
    
    return 0;
}

