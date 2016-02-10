/* File:   main.cpp
 * Author: Christopher Garcia
 * Created on January 27, 2016, 1:54 PM
 * Function: Black Jack Game Final
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
    int Deck(int&);
    void GameSrt(int&);
    void Dealing(int&,int&);
    void Hit(int&,int&,int&);
    bool isWnnr(int&,int&,int&,int&,int&);
    void Bet(int&,int&);
    void Rules();
    int Optns(int);
    int Wallet(int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    unsigned short menu;
    int mMoney=1000;//defaulting money if it isnt changed
//Introduction to the Black Jack Game game
    cout<<"Welcome to WILD ACE Black Jack Game!"<<endl<<endl;
//Menu for the game
    do{
        cout<<"Press 1 to start playing the game!"<<endl;
        cout<<"Press 2 for the rules of WILD ACE Black Jack!"<<endl;
        cout<<"Press 3 for options."<<endl;
        cout<<"Press anything else to exit."<<endl;
        cin>>menu;
        switch(menu){
            case 1:
                GameSrt(mMoney);
                break;
            case 2:
                Rules();
                break;
            case 3:
                mMoney=Optns(mMoney);
                break;
            default:
                cout<<"Exiting..."<<endl;
                return 0;
        } 
    }
    while(menu>=1);
    return 0;
}
//The main engine the game runs on
void GameSrt(int& mMoney){
//Declare Variables
    unsigned short tPlys=0,wPlys=0;//sets the variables
    int Card,bet=0,
        dSum=0,pSum=0,
        win=4;
    char ply;//To decide what the pay off is, 4 is default.
//Prompt the player
    cout<<"Welcome to the Black Jack table!"<<endl;
    do{//Engine to play the game
        dSum=0;pSum=0;win=4;//resets the variables
        Bet(mMoney,bet);
        cout<<"Dealing..."<<endl;
        Dealing(pSum,dSum);
        Hit(win,pSum,dSum);
        if(isWnnr(win,pSum,dSum,mMoney,bet))
            wPlys++;
        cout<<"Would you like to keep playing?(Y/N)"<<endl;
        cin>>ply;tPlys++;
    }
    while(ply=='y'||ply=='Y');
//Stats
    cout<<"You won "<<wPlys<<" out of "<<tPlys<<endl;
    cout<<"You have a "<<(static_cast<float>(wPlys)/(tPlys))*PCNVRT
        <<"% WinRate."<<endl;
    ofstream myfile;//Score file
    myfile.open("Scores.txt");
    if(myfile.fail())
        cout<<"Can't write to file"<<endl;
    else
        myfile<<"Your ending Money $"<<mMoney;
    myfile.close();
    cout<<"Returning to the menu..."<<endl<<endl;
    return;
}
//Deck Generator
int Deck(int& Card){
    Card=(rand()%14)+1;
    if(Card>10)//for the face cards
        (Card>13?cout<<"A":
        (Card>12?cout<<"K":
        (Card>11?cout<<"Q":
                 cout<<"J")));
    else
        cout<<Card; 
    if(Card>10&&Card!=14)
        Card=10;
    else if(Card==14)//ace mechanic 
        Card=11;
return Card;
}

//Dealing the First set of cards
void Dealing(int& pSum,int& dSum){
    int Card;//Need the deck Function//Formatting
    cout<<setw(10)<<"Player 1 |"<<setw(10)<<left<<"Dealer"<<endl;
    cout<<right<<setw(5);
    Deck(Card);pSum+=Card;
    cout<<setw(5)<<"|"<<setw(5);
    Deck(Card);dSum+=Card;
    cout<<endl;
    cout<<setw(5);
    Deck(Card);pSum+=Card;
    cout<<setw(5)<<"|"<<setw(5)<<"?"<<endl;
    }
//Hit or Stay
void Hit(int& win,int& pSum,int& dSum){
//Declare Variables
    char hit;//For the hit or stay option
    int Card;//Need the deck function
//Prompt the User
    if(pSum!=21){
        do{//User hit or stay option
            cout<<"Hit or Stay?(H/S)"<<endl;
            cin>>hit;
            if(hit=='H'||hit=='h'){
                Deck(Card);
                pSum+=Card;
                cout<<endl;
                if(pSum>21){
                    cout<<"You Busted! You Lose!"<<endl;
                    win=0;
                    return;
                }
            }
        }while(hit=='h'||hit=='H');
//Dealer
        cout<<"The Dealer's Down Card was"<<endl;
        Deck(Card);cout<<endl;
        dSum+=Card;
        while(dSum<=16){//Must Hit 16 cant hit 17
            cout<<"Dealer must hit."<<endl;
            Deck(Card);
            dSum+=Card;
            cout<<endl;
        }
    }
    else{
        cout<<"Black Jack!"<<endl;
        win=3;
    }
    return;
}
//Decides who wins and how to be paid
bool isWnnr(int& win,int& pSum,int& dSum,int& mMoney,int& bet){
//Declare Variables
    bool wnnr=false;
//Who won the  Hand
    if(win==4){//Compares
        if(dSum>21){
            cout<<"Dealer Busted! You Win!"<<endl;
            win=1;
        }
        else if(dSum==pSum){
            cout<<"You Pushed!"<<endl;
            win=2;
        }
        else if(dSum>pSum){
            cout<<"You Lose!"<<endl;
            win=0;
        }
        else if(dSum<pSum){
             cout<<"You Win!"<<endl;
             win=1;
        }
    }
    switch(win){//Handles the bets
            case 0:
                cout<<"You lost $"<<bet<<" :("<<endl;
                mMoney-=bet;break;
            case 1:
                cout<<"You Won $"<<bet<<" :)"<<endl;
                mMoney+=bet;break;
            case 2:
                cout<<"You broke even. :|"<<endl;
                break;
            case 3:
                cout<<"You hit Black Jack! You won $"<<bet*1.5<<" :("<<endl;
                mMoney+=bet*1.5;break;
    }
    cout<<"You have $"<<mMoney<<endl<<endl;
    if(win==1||win==3)
        wnnr=true;
    return wnnr;
}
//Choose the bet and checks the wallet
void Bet(int& mMoney,int& bet){
//Declare Variables
//Wallet, Place bet
    do{
    cout<<"You have "<<mMoney<<" avaliable to bet."<<endl;
    cout<<"How much would you like to bet?"<<endl;
    cin>>bet;
    if(bet>mMoney||bet<0)
        cout<<"You don't have that much Green. Or you are dumb. Try Again."
            <<endl;
    }
    while(bet>mMoney||bet<0);
    return;
}
//Options
int Optns(int mMoney){
//Declare Variables
    unsigned short menu;
    do{
        cout<<"Press 1 to change wallet size."<<endl;
        cout<<"Press 2 for credits."<<endl;
        cout<<"Press 3 to return to the menu."<<endl;
        cin>>menu;
        switch(menu){
            case 1:
                mMoney=Wallet(mMoney);
                break;
            case 2:
                cout<<"This wonderful game was created by the great mind of "
                        "Christopher Garcia."<<endl<<endl;
                break;
            case 3:
                cout<<endl;return mMoney;
        } 
    }
    while(menu>=1);
    return 0;
}
//Wallet Size
int Wallet(int mMoney){
//Declare Variables
    mMoney=1000;//Default starting money
//Prompt the user
    cout<<"What would you like the wallet size to be? Default is 1000."<<endl;
    cin>>mMoney;
    cout<<"Wallet size set to $"<<mMoney<<endl<<endl;
    return mMoney;
    
    
}
//Rules
void Rules(){
//Declare variables
    ifstream rIn;
    string line;
//Output the rules
    rIn.open("Rules.txt");
    for(unsigned short c=1;c<=5;c++){
        getline(rIn,line);
        cout<<line<<endl;
    }
    cout<<endl;
    rIn.close(); 
    return;
}