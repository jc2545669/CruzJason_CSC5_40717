/* 
 * File:   main.cpp
 * Author: Jason Cruz
 * Created on January 13, 2015, 9:15 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare 2 Boolean Variables
    bool X,Y;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X| |Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in he first row
    X=true;Y=true;    
    cout<<(X? 'T':'F')<<" ";
    cout<<(Y? 'T':'F')<<" ";
    cout<<(!X? 'T':'F')<<" ";
    cout<<(!Y? 'T':'F')<<" ";
    cout<<(X&&Y? 'T':'F')<<" ";
    cout<<(X||Y? 'T':'F')<<" ";
    cout<<endl;
    //Fill in the second row
    Y=false;
    cout<<(X? 'T':'F')<<" ";
    cout<<(Y? 'T':'F')<<" ";
    cout<<(!X? 'T':'F')<<" ";
    cout<<(!Y? 'T':'F')<<" ";
    cout<<(X&&Y? 'T':'F')<<" ";
    cout<<(X||Y? 'T':'F')<<" ";
    cout<<endl;
    //Fill in he third row
    X=false;
    cout<<(X? 'T':'F')<<" ";
    cout<<(Y? 'T':'F')<<" ";
    cout<<(!X? 'T':'F')<<" ";
    cout<<(!Y? 'T':'F')<<" ";
    cout<<(X&&Y? 'T':'F')<<" ";
    cout<<(X||Y? 'T':'F')<<" ";
    cout<<endl;
    //Fill in the fourth row
    
    cout<<(X? 'T':'F')<<" ";
    cout<<(Y? 'T':'F')<<" ";
    cout<<(!X? 'T':'F')<<" ";
    cout<<(!Y? 'T':'F')<<" ";
    cout<<(X&&Y? 'T':'F')<<" ";
    cout<<(X||Y? 'T':'F')<<" ";
    cout<<endl;
    //Fill in he fifth row
    
    cout<<(X? 'T':'F')<<" ";
    cout<<(Y? 'T':'F')<<" ";
    cout<<(!X? 'T':'F')<<" ";
    cout<<(!Y? 'T':'F')<<" ";
    cout<<(X&&Y? 'T':'F')<<" ";
    cout<<(X||Y? 'T':'F')<<" ";
    cout<<endl;
    //Exit Stage Right!
    
    return 0;
}

