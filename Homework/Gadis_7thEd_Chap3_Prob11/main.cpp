/* 
 * File:   main.cpp
 * Author: Jason Cruz
 * Created on January 13, 2015, 10:15 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and initialize 
    float bcToDlr=232.8; //Jan. 13th 2015 10:17am
    float erToDlr=0.849381; //Same Date
    float ynToDlr=118.03; //Same Date
    float bitcoin,dollars,euros,yen;
    //Input the number of bitcoin then convert
    cout<<"Input the number of bicoin"<<endl;
    cout<<"You wish to purchase. "<<endl;
    cin>>bitcoin;
    //Convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    
    cout<<bitcoin<<" = "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" = "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    //Exit Stage Right!
    
    return 0;
}

