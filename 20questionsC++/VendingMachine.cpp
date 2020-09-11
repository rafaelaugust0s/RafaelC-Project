#include <iostream>

using namespace std;

int main(){


    bool amountPaid = false;
    double totalPaid= 0.00;

    while ( amountPaid == false){

        char userInput;
        cout<< "Cost per twinkie is $3.50. "<<endl;
        cout <<"---------------------------"<<endl;
        cout<< " Insert coins. Type D for Dollar, Q for Quarter,d for dime, N for Nickle "<<endl;
        cout<<"Please insert coins for twinkie:  " << 3.50 -totalPaid <<" - ";
        cin >> userInput;


        if (userInput == 'D'){
            totalPaid = totalPaid+1;

        }else if(userInput== 'Q'){
            totalPaid = totalPaid+0.25;

        }else if(userInput == 'd'){
            totalPaid = totalPaid+0.10;

        }else if(userInput== 'N'){
            totalPaid =totalPaid +0.05;
        }else{
            cout<<"Invalid Input"<<endl;

        }
        
        if (totalPaid >= 3.50){
            amountPaid= true;
        }
    }
     cout<< "Enjoy your twinkie!!";
     cout<< "Your change is $" << totalPaid-3.50;

     cout<< endl;


return 0;


}

 
    
   