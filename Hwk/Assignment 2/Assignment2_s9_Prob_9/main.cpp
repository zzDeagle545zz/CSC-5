
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 23, 2016, 7:26 PM
 * Function:Number picker with sums
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables 
    int pSum=0,nSum=0,tSum=0,//Sums
        num;
//User input
    for(unsigned short c=1;c<=10;c++){
        cout<<"What is number "<<c<<" as an integer?"<<endl;
        cin>>num;
        (num>=0?pSum+=num:nSum+=num);
        tSum+=num;
    }
//Outputs
    cout<<"The positive sum is "<<pSum<<endl
        <<"The negative sum is "<<nSum<<endl
        <<"The total sum is "<<tSum<<endl;
    return 0;
}

