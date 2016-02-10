
/* 
 * File:   main.cpp
 * Author: Christopher Garcia
 *
 * Created on February 4, 2016, 2:32 PM
 * Function: Use Linear Search and Binary Search to find multiple positions
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void LinSrch(int[],int,int);
void BinSrch(int[],int,int,int&,int&);
//Execution Begins 
int main(int argc, char** argv) {
//Declare Variables 
    int size=100,Arry[size],
        num;
//Set random number seed
    srand(static_cast<int>(time(0)));
//Fill the array randomly
    for(int c=1;c<=100;c++){
        Arry[c-1]=(rand()%89)+10;//(10-99)
    }
//Print the scrambled array
    for(int c=1;c<=100;c++){
        cout<<Arry[c-1]<<" ";
        if(c%10==0)
            cout<<endl;
    }
//Sort the Array
    for(int c=0;c<size-1;c++){
        for(int c1=c+1;c1<size;c1++){
            if(Arry[c]>Arry[c1]){//compare
                //swap
                int temp=Arry[c];
                Arry[c]=Arry[c1];
                Arry[c1]=temp;
            }
        }
    }
    cout<<endl<<endl;
//Print the Array
     for(int c=1;c<=100;c++){
        cout<<Arry[c-1]<<" ";
        if(c%10==0)
            cout<<endl;
    }
//The number we are looking for
    num=rand()%89+10;
    cout<<endl<<"The number "<<num<<endl;
//Search for all values
    LinSrch(Arry,size,num);    
    return 0;
}
//Linear Searches for the value
void LinSrch(int a[],int size,int num){
//Declare Variables 
    int lRng=0,hRng,Mid;
//Search the Array
    BinSrch(a,size,num,lRng,hRng);
//Check the range for multiple values
    if(lRng>=hRng){
        hRng-=1;lRng+=1;
        while(lRng>=hRng){
            if(a[(hRng)]==num)
                cout<<num<<" was found at position "<<((hRng))<<endl;
        hRng++;
        }
    }
    else{
        lRng-=1;hRng+=1;
        while(hRng>=lRng){
            if(a[(lRng)]==num)
                cout<<num<<" was found at position "<<((lRng))<<endl;
        lRng++;
        }
    }
}
//Binary Search
void BinSrch(int a[],int size,int num,int& lRng,int& hRng){
//Declare Variables
    int Mid;
       // pos=-1;//The Ranges
//Set the range
    hRng=size-1;
//Binary Search
    do{
        Mid=(hRng+lRng)/2;
        if(a[Mid]==num)return;
        else if(a[Mid]>num) hRng=Mid-1;
        else lRng=Mid+1;
    }while(hRng>=lRng);
    cout<<num<<" was not found."<<endl;
    return;
}