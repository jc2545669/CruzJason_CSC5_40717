/* 
 * File:   main.cpp
 * Author: Jason Cruz
 * Created on January 13, 2015, 10:51 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes2

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First Pass calculate -> "<<guess<<endl;
    //Second pass
    r=number/guess
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second Pass calculate -> <<guess<<endl;"
           
    
    
    return 0;
}

