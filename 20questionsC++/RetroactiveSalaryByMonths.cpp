#include <iostream>

using namespace std;

int main(){


    double oldSalary, retroSalary, newSalary, increaseSalary, newMonthlySalary, numOfMonths,moneyOwned,oldMonthSalary,retroMonthly;
    const double payIncrease = .076;

        cout << "\n\n Calculate your retroactive salary by months:\n";
    cout << "---------------------------------\n";


    cout << "Enter your old annual salary" << endl;
    cin >> oldSalary;

        cout << "Enter number of months owned" << endl;
    cin >> numOfMonths;


    newSalary = (oldSalary * .076) + oldSalary;
    increaseSalary= newSalary - oldSalary;
    newMonthlySalary= newSalary / 12;
    retroSalary =(oldSalary / 2) * payIncrease;
    oldMonthSalary= (oldSalary/12);
    retroMonthly= (newMonthlySalary - oldMonthSalary);
    moneyOwned= (retroMonthly * numOfMonths);
    
    cout<<endl;

    cout << "your new annual salary is: $ " << newSalary <<endl;
    cout << "You recieved a $" << increaseSalary << "increase in salary." <<endl;
    cout << "Your new montly Salari is: $" << newMonthlySalary <<endl;
    cout << "the company owes you: $" << moneyOwned <<" for " << numOfMonths <<" months " <<endl;

    return 0;
}