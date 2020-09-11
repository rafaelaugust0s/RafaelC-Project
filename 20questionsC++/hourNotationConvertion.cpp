#include<iostream>

void overviewData( );
void inputData(int &hr,int &min);
void convert12Format(int &hr,char &type);
void displayData(int hr,int min,char type);


int main() 
{   
	using namespace std;
    int hours,min;
	char type,choice;
	overviewData( );
	do
	{
        inputData(hours,min);
	    convert12Format(hours,type);
	    displayData(hours,min,type);
		cout<<"To continue then press'y':";
		cin>>choice;
	}while(choice=='y');
}
void overviewData( )
{
    using namespace std;
    cout << "Converts 24-hour to 12-notation.\n";
	cout<<"-----------------------------------\n";
}
void inputData(int &hr,int &min)
{

   using namespace std;
   cout<<"Enter hours in 24 hr format:";
   cin>>hr;
   cout<<"Enter minutes:";
   cin>>min;
}
void convert12Format(int &hrs,char &type)
{
	if(hrs>12)
	{
		hrs=hrs%12;
		type='P';
	}
	else
		type='A';
}
void displayData(int hrs,int min,char t)
{
	using namespace std;
	cout<<"12-hour notation:"<<endl;
	cout<<hrs<<":"<<min<<" "<<t<<"M"<<endl;
}