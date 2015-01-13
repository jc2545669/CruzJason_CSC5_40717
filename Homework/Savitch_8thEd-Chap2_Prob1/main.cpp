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
const float CMTNONS=3.527392e4f;//Conversion from

//Function Prototypes2

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal contents in ounces
    float wtPackTn;//Weight of cereal contents in tons
    float nPackTn;//Number of cereal boxes in a metric ton
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in metric ton => "<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer++'Y'){
        //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in metric ton =>"<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    
    
    return 0;
}

