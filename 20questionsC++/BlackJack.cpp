#include<iostream>
using namespace std;
int main()
{
	int numOfCards,number,acecnt;
	char choice, card;
	do	
	{
	  number = 0;
	  acecnt =0;
	  cout << "\n\n Get the closest to 21 or get busted!:\n";
      cout << "---------------------------------\n";
       cout<<"How many cards would like (from 2-5):";
	  cin>>numOfCards;
	  if(numOfCards<2 || numOfCards >5)
	  	cout<<"Invalid input";
	  else
	   {
		for(int j = numOfCards; j>0; j--)
		{
		  cout<<" Pick your cards from(2-9), 'A' worths 1 0r 11, 'J', 'Q', 'R', '10' worth 10 each\n";
		  cout<<" Enter number of card: ";
		  cin>>card;
		  if(card>='2' && card<='9')
		  {
		 	number  = number + 2 + (int)(card- '2');
		  }
		  else if (card =='j' || card =='J'|| 
                     card =='t'|| card =='T'
				|| card =='q'|| card =='Q'||
                         card =='k'|| card =='K')
		  {
		    number+=10;
		   }
		  else if (card =='a'|| card == 'A')
		  {
		    acecnt++;
		  }	
	 	}
	   }
        if(acecnt)
	   {
		while(acecnt>1)
		{
		  number+= 1;
		  acecnt--;
		}
		if(number >10 && acecnt == 1)
	 	{
	     	number+= 1;
		}
		else if(number <10 && acecnt ==1)
		{
		  number+= 11;
		}
	   }
	   if(number>21)
		  cout<<"\n busted";
	   else
		cout<<"\nScore: "<< number<<endl;
		cout<<"Would you like to play again? Press 'Y' or 'y' to continue:"<<endl;
		cin>>choice;
	}while(choice =='y' || choice =='Y');
	    cout<<endl;


return 0;


}