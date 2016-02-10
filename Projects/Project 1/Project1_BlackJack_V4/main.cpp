/* File:   main.cpp
 * Author: Christopher Garcia
 * Created on January 27, 2016, 1:54 PM
 * Function: Black Jack Game
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
int Deck(int& Card);
void GameSrt();
void Dealing(int& pSum,int& dSum);
void Hit(char& win,int& pSum,int& dSum);
int Wnnr(char& win,int& pSum,int& dSum);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    unsigned short menu;
    int wallet;
//Introduction to the Black Jack Game game
    cout<<"This is Christopher Garcia's C++ Black Jack Game!"<<endl;
//Menu for the game
    do{
        cout<<"Press 1 to start playing the game!"<<endl;
        cout<<"Press 2 for the rules and objective of Black Jack!"<<endl;
        cout<<"Press 3 for options."<<endl;
        cout<<"Press 4 for instructions and tips."<<endl;
        cin>>menu;
        switch(menu){
            case 1:
                GameSrt();
                break;
            case 2:

            case 3:

            default:;
        } 
    }
    while(menu<=1);
    return 0;
}
//The main engine the game runs on
void GameSrt(){
//Declare Variables
    int Card,dSum=0,pSum=0;
    char win=4;//To decide what the pay off is, 4 is default.
//Prompt the player
    cout<<"Welcome to the Black Jack table!"<<endl
        <<"Dealing..."<<endl;
    Dealing(pSum,dSum);
    Hit(win,pSum,dSum);
    Wnnr(win,pSum,dSum);
    return;
}
//Deck Generator
int Deck(int& Card){
    Card=(rand()%14)+1;
    if(Card>10)
        (Card>13?cout<<" A ":
        (Card>12?cout<<" K ":
        (Card>11?cout<<" Q ":
                 cout<<" J ")));
    else
        cout<<" "<<Card<<" "; 
    if(Card>10)
        Card=10;
return Card;
}

//Dealing the First set of cards
void Dealing(int& pSum,int& dSum){
    int Card;//Need the deck Function
    cout<<"Player 1 | Dealer"<<endl;
    cout<<"  ";
    Deck(Card);pSum+=Card;
    cout<<"        ";
    Deck(Card);dSum+=Card;
    cout<<endl;
    cout<<"  ";
    Deck(Card);pSum+=Card;
    cout<<"        "<<" ?"<<endl;
    }
//Hit or Stay
void Hit(char& win,int& pSum,int& dSum){
//Declare Variables
    char hit;//For the hit or stay option
    int Card;//Need the deck function
//Prompt the User
    if(pSum<21){
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
            else
                Hit(win,pSum,dSum);
        }
//Dealer
        cout<<"The Dealer's Down Card was ";
        Deck(Card);dSum+=Card;
        while(dSum<17){//Must Hit 16 cant hit 17
            cout<<"Dealer must hit."<<endl;
            Deck(Card);
            dSum+=Card;
            cout<<endl;
        }
        if(dSum>21){
            cout<<"Dealer Busted! You Win!"<<endl;
                    win=1;
        }
            return;
    }
    else{
        cout<<"Black Jack!"<<endl;
        win=3;
    }
    return;
}
int Wnnr(char& win,int& pSum,int& dSum){
//Declare Variables
//Who won the  Hand
    if(win=4){
        if(dSum>21){
            cout<<"Dealer Busted! You Win!"<<endl;
            win=2;
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
}