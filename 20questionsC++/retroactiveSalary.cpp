#include <iostream>

using namespace std;

int main(){


    double oldSalary, retroSalary, newSalary, increaseSalary, newMonthlySalary;
    const double payIncrease = .076;
    char repeatInput;

    cout << "\n\n Calculate your new annual salary:\n";
    cout << "---------------------------------\n";

    do{
        cout << "Enter your old annual salary" << endl;
        cin >> oldSalary;
        newSalary = (oldSalary * .076) + oldSalary;
        increaseSalary= newSalary - oldSalary;
        newMonthlySalary= newSalary / 12;
        retroSalary =(oldSalary / 2) * payIncrease;
        cout<<endl;
        cout << "your new annual salary is: $ " << newSalary <<endl;
        cout << "You recieved a $" << increaseSalary << "increase in salary." <<endl;
        cout << "Your new montly Salari is: $" << newMonthlySalary <<endl;

        cout<<"Type 'y' to continue (or) Exit:";
        cin>>repeatInput;
    }while(repeatInput == 'y' || repeatInput == 'y');

   

return 0;
}