#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){


    int minutes,startTime;
    char ch;
    string day;
    double cost,rate;
    cout << fixed << showpoint << setprecision (2);

        cout << "\n\n How much will you pay for your phone call?:\n";
        cout << "---------------------------------\n";

    do
    {
        cout << "Enter the start time of the call.";
        cin >> startTime;
        while (startTime< 0 || startTime >= 2400)

    {
        cout << "Invalid Time";
        cout << "Enter the start Time of the call";
        cin >> startTime;

    }
       cout << "Enter length of the call in minutes:";
       cin >> minutes;
       cout << "Enter the day of the week:";
       cin >> day;
        if (day =="monday" || day =="MONDAY" ||
        day =="tuesday" || day =="TUESDAY" ||
        day =="wednesday" || day =="WEDNESDAY" ||
        day =="thursday" || day =="THURSDAY" ||
        day =="friday" || day =="FRIDAY")

        { 
            if (startTime>= 800 && startTime<= 1800)
               rate = 0.4;
               else
               rate = 0.25;
               cost= minutes* rate;
               cout << " Rate for the call was" << "$"
               << rate << "a minute" <<endl
                        << "Your total cost: " << "$" <<cost;
        }
        else
            cout << "Invalid";
            cout << endl << endl;
                cout << endl << "Would you like to calculate your bill again? (y/n): ";
                cin >> ch;
                cout << endl << endl;

    }
            while( ch == 'Y' || ch == 'y');
            cout << "End of program ";


    return 0;
}
