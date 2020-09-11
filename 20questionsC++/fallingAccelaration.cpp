#include <iostream>

using namespace std;

int main(){


    int time;
    double distance;

    cout<<"How far an object would drop if it is in freefall for that length of time?";
    cout<<"--------------------------------------------------------------------------"<<endl;

    cout <<" Enter time in seconds: ";
    cin>> time;

    distance= (32* time* time)/2;

    cout << "Travel distance is: " <<distance <<"feet per seconds due to gravity" <<endl;






    return 0;
}