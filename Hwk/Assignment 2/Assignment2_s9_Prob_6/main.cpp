
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on January 19, 2016, 12:42 PM
 * Function:
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Declare Variables 
    float pRate=10.00f,nPay,ssPay,fPay,sPay,gPay,
        sTax=.05f,ssTax=.06f,fTax=.14f;
    unsigned short hrs,dpend,
            uDues=10,ins=35;
    char cont='Y';
//Read in User input
    do{
        cout<<"How many hours have you worked this week?"<<endl;
        cin>>hrs;
        cout<<"How many dependents?"<<endl;
        cin>>dpend;
//Calculations
        gPay=pRate*hrs;//Gross
        ssPay=gPay*ssTax;
        sPay=gPay*sTax;
        fPay=gPay*sTax;
        nPay=gPay-ssPay-fPay-sPay;//Net Pay
        nPay-=uDues;
            if(dpend>=3){
                nPay-=ins;
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout<<"Your total Gross pay is $"<<gPay<<"."<<endl;
                cout<<"Your total net pay is $"<<nPay<<"."<<endl;
                cout<<"Your Federal withholdings are $"<<fPay<<endl;
                cout<<"Your State withholdings are $"<<sPay<<endl;
                cout<<"Your Social Security withholdings are $"<<ssPay<<endl;
                cout<<"Your Union dues are $"<<uDues<<endl;
                cout<<"Your insurance dues are $"<<ins<<endl;
                cout<<"Want to continue? Y/N?"<<endl;
                cin>>cont;
            }
            else{
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout<<"Your total Gross pay is $"<<gPay<<"."<<endl;
                cout<<"Your total net pay is $"<<nPay<<"."<<endl;
                cout<<"Your Federal withholdings are $"<<fPay<<endl;
                cout<<"Your State withholdings are $"<<sPay<<endl;
                cout<<"Your Social Security withholdings are $"<<ssPay<<endl;
                cout<<"Your Union dues are $"<<uDues<<endl;
                cout<<"Your insurance dues are $0"<<endl;
                cout<<"Want to continue? Y/N?"<<endl;
                cin>>cont;
            }
        }
    
    while(cont=='Y'||cont=='y');
        
    return 0;
}

