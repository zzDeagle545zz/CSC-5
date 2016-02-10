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
void Deck(int Card);
void Dealing();
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    srand(static_cast<int>(time(0)));
    unsigned short Card;
    Dealing();
    
    
    return 0;
}
//Deck Generator
void Deck(int Card){
    Card=(rand()%14)+1;
    if(Card>10)
        (Card>13?cout<<'A':
        (Card>12?cout<<'K':
        (Card>11?cout<<'Q':
                 cout<<'J')));
    else
        cout<<Card;
                
        
return;
}
void Dealing(){
    int Card;
    cout<<"Player 1 | Dealer"<<endl;
    cout<<"   ";
    Deck(Card);cout<<"         ";
    Deck(Card);cout<<endl;
    cout<<"   ";
    Deck(Card);cout<<"         ";
    Deck(Card);cout<<endl;
}
