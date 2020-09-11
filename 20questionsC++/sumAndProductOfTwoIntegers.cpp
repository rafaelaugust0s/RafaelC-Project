#include <iostream>

using namespace std;

int main(){

    cout<< "Sum and Product of two integers" << endl;
    cout<< "________________________________" << endl;

    int firstNum,secondNum,sum, product;

  

    cout<< "Enter first number: ";
    cin >> firstNum;

    cout<< "Enter second number: ";
    cin >> secondNum;

    sum= firstNum + secondNum;
        cout <<" the sum of the  two numbers is: " << sum <<endl;

    product= firstNum * secondNum;
            cout <<" the product of the two numbers is: " << product <<endl;



    return 0;
}