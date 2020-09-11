#include <iostream>

using namespace std;

int main(){


    float weight,height, bmi;
    char repeatInput;

      cout << "\n\n Calculate your BMI:\n";
      cout << "---------------------------------\n";


    do{
      cout<< "Enter you weight in Kilograms: ";
      cin>> weight;
      cout<< "Enter you height in meters: ";
      cin>> height;
      bmi= weight /(height*height);

  
     if (bmi<18.5)
      cout<< "Underweight" <<endl;
      else if (bmi>25)
      cout<< "Overweight"<<endl;
      else 
      cout << "Normal weight" <<endl;
      cout << "Your BMI is:  " << bmi <<endl;
      cout<< "type Y to start over or E to exit" <<endl;
      cin>> repeatInput;
  
    }while (repeatInput == 'Y' || repeatInput == 'y');
  




return 0;
}