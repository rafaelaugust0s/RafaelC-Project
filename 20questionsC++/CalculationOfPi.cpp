#include <iostream>
#include <cmath>

using namespace std;

int main(){

 
    double n;
    double pi=0;
    char repeatInput;
    int i,j,k=1;

        cout << "\n\n Calculate the Pi value:\n";
        cout << "---------------------------------\n";

    do
    {
     cout<<"Enter n value:";
     cin>>n;
         for(i=1,j=2;i<n;i++,j++)
            {
             pi=pi+pow((-1),j)*4/k;
             k=k+2; 
            }
             cout<<"pi value:"<<pi<<endl;
             cout<<"Type 'y' to continue (or) Exit:";
             cin>>repeatInput;

    }while(repeatInput == 'y' || repeatInput == 'Y');
                  

           

return 0;
}