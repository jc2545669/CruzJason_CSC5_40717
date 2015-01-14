/* 
 * File:   main.cpp
 * Author: Jason Cruz
 * Created on January 14, 2015, 10:35 AM
 */

#include <iostream>
using namespace std;

//Use Libraries

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    const float CONC=1e-3f;//Sweetener concentration 
    float wtCoke=3.5e2f;//Weight of Coke in grams
    float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
    float wtMouse=3.5e1f;//Weight of mouse in grams
    float kPer,wtDsPer;
    int   nCans;
    //Input the desired weight of person
    cout<<"Input your desired weight in pounds"<<endl;
    cout<<"Format he input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//Convert to grams
    //Calculation
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limit of what you can drink
    cout<<"Number of cans of diet coke";
    cout<<" That will kill you = "<<nCans<<endl;
    //Exit Stage Right!
    
    
    
    return 0;
}

