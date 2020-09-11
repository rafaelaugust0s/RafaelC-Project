#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    string name [7];
    int grade[7];
    int index [7];
    int i,j;

       for(i=0;i<=6;i++){ 

       cout<< "Please Enter  name" <<endl;
       cin>> name[i];
       cout<< "Please enter grade" <<endl;
       cin>> grade [i]; 
       }
           for(i=0;i<=6;i++){ 

             index[i]=i;
           }


             for(i=0;i<=4;i++){ 

             for(j=i+1;j<=5;i++){
               int temp;

              if(name[index[i]]>name[index[j]])
             {
                temp = index[i];
                index[i] = index[j];
                index[j] = temp;

              }     
           }  
       }
  
         for(i=0;i<=6;i++){

         cout<< name[index[i]]<<"    " 
             << grade[index[j]] <<endl;
         }


return 0;
}