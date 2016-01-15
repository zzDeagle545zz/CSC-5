
/* 
 * File:   main.cpp
 * Author: zzDeagle545zz
 *
 * Created on January 14, 2016, 1:12 PM
 * Function:Lotto Winnings
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables 
    int lotto=1500;
    cout<<"You won the lottery! You won 1.5 Billion Dollars!"<<endl;
    cout<<"But we must first take out the lump sum penalty."<<endl;
    lotto*=.62;
    
    cout<<"Now you get "<<lotto<<" million dollars!"<<endl;
    cout<<"But now we must take out the the taxes."<<endl;
    lotto*=.52;
    
    cout<<"Now you get "<<lotto<<" million dollars!"<<endl;       
    cout<<"But now there is the marriage penalty."<<endl;
    lotto*=.50;
    
    cout<<"Now you get "<<lotto<<" million dollars!"<<endl; 

    return 0;
}

