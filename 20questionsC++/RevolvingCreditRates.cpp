#include <iostream>

using namespace std;

 int main(){

    double dueCost, dueInterest, minPayment, bal;
    char Continue;
    
      cout << "Enter balance due: ";
      cin >> bal;
        if (bal> 1000){
           dueInterest= ((bal-1000)*.01+(1000)*.015);
            }else{
              dueInterest = bal*.015;
              dueCost = bal + dueInterest;
              minPayment = dueCost<=10;
              dueCost = ((dueCost*.1)>10? (dueCost*.1):10);
            }
                cout<< " Interest on balance: " << dueInterest <<endl;
                cout<< " Minimum payment due: " << dueCost;

                 cout<< (Continue);      
                 while (Continue == 'Y' || Continue == 'y'); 
return 0;

    }  

