
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on February 9, 2016, 2:49 PM
 * Function:
 */

//System Libraries
#include <iostream>//Cout and Cin streams
#include <ctime>   //Time for srand
#include <cstdlib> //Rand Function Getline
#include <fstream> //i/o File output
#include <iomanip> //Formmating
#include <string>  //Strings for getline
using namespace std;

//Global Constants
const short PCNVRT=100;//Conversion Factor for a percent
//Function Prototypes
 void GameSrt(int);
 void Rules();
 void Optns();
 void DckGen(int [],int);
 void dShffl(int[],int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    char menu;
    int size=(52*2);
//Menu for the game
    do{
        cout<<"Press 1 to start playing the game!"<<endl;
        cout<<"Press 2 for the rules of Black Jack!"<<endl;
        cout<<"Press 3 for options."<<endl;
        cout<<"Press anything else to exit."<<endl;
        cin>>menu;
        switch(menu){
            case 49:
                GameSrt(size);
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            default:
                cout<<"Exiting..."<<endl;
                return 0;
        } 
    }
    while(menu>=1);    
    
    
    
    
    return 0;
}
//******************************************************************************
//******************************************************************************
//                             Game Start
//Function-
//Inputs-->
//Outputs<--
//******************************************************************************
void GameSrt(int n){
//Declare Variables
    int Dck[n];
    DckGen(Dck,n);
    for(int c=1;c<=n;c++){
        cout<<setw(3)<<Dck[c-1];
        if(c%4==0)cout<<endl;
    }
    cout<<endl;
    dShffl(Dck,n);
    for(int c=1;c<=n;c++){
        cout<<setw(3)<<Dck[c-1];
        if(c%4==0)cout<<endl;
    }
}
//******************************************************************************
//******************************************************************************
//                             Deck Generator
//Function-
//Inputs-->
//Outputs<--
//******************************************************************************
void DckGen(int Dck[],int n){
//Declare Variables
//Fill the Deck
    for(int c=1;c<=n/52;c++)
        for(int c1=0;c1<(52*c);c1++)
            Dck[c1]=(c1+4*c)/(4*c);
}
//******************************************************************************
//******************************************************************************
//                             Deck Shuffle
//Function-
//Inputs-->
//Outputs<--
//******************************************************************************
void dShffl(int Dck[],int n){
//Declare Variables
//Fill the Deck
    for(int c=1;c<=10000;c++){
        int temp,
            num1=rand()%n,
            num2=rand()%n;
        temp=Dck[num1];
        Dck[num1]=Dck[num2];
        Dck[num2]=temp;  
    }
}