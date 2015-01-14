/* 
 * File:   main.cpp
 * Author: Jason Cruz
 * Created on January 14, 2015, 11:00 AM
 */

#include <iostream>
using namespace std;

//Use Libraries

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Savitch 8thEd Chap 2 Prob 2"<<endl;
    cout<<"Solution 2 Savitch 9thEd Chap 2 Prob 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results 
    switch(choice){
        case 1:{
            cout<<"You have chosen Solution 1"<<endl;
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
            break;
        }
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
            break;
        }
        default: cout<<"Incorrect Choice"<<endl;
    }
    
    return 0;
}

