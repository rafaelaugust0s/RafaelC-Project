#include <iostream>
#include <string>
#include <fstream>

using namespace std;
 

int main(){ 
     ifstream inFile;

      cout<< "Reading babynames.txt, please wait..." <<endl;
      inFile.open("Babynames");


         if(inFile.fail()){
            cout << "unable to open file" << endl;
            exit(1);
         }

         string nameInput;
         string boyName;
         string girlName;
         int rank= 0;
         int boyRank= 0;
         int girlRank =0;

          cout << "\n\n Find the most popular name:\n";
          cout << "---------------------------------\n";


         cout << " Which name would you like to check? < no space in names please > " << endl;
         cin >> nameInput;

         inFile >> boyName;
         inFile >> girlName;
          rank++;

         cout << " This is the ranking for the name you entered-  " << endl;

         if (nameInput == boyName) {
         cout << nameInput << " is ranked " << rank << " in  popularity among boys. " << endl;
         boyRank = rank;
         }
         if (nameInput == girlName) {
         cout << nameInput << " is ranked " << rank << " in  popularity among girls. " << endl;
        girlRank = rank;
         }
         if (boyRank < 1 || boyRank > 1000) {
         cout << nameInput << " is not ranked among the top 1000 boys name. " << endl;
         }
         if (girlRank < 1 || girlRank > 1000) {
         cout << nameInput << " is not ranked among the top 1000 girls name. " << endl;
         }

          cout << " Hope that is the result you were looking for ... Ending program. " << endl;








        inFile.close();


return 0;
} 



