#include <iostream> 
#include <iomanip> 
#include <fstream> 
#include <string> 
using namespace std; 
  
//int calculate(ifstream&, ofstream&); 
  
int main() 

{ 
    ifstream in; 
    ofstream out; 
  
    in.open("Paragraph.txt"); 
  
       if (in.fail()) 
       { 
        cout << "Input file failed. Please try again or use another file./n"; 
        system("pause"); 
        return 1; 
        } 
  
       out.open("GradeBook2.txt"); 
       //calculate(in, out); 
       out.close(); 
       in.close(); 
  
        cout << "Program has run successfully, grades averages have been written to GradeBook2.txt." << endl; 
  
return 0; 
} 
 /* 
int calculate(ifstream& in, ofstream& out) 
  
{ 
    int i, sum, a[10]; 
    string first, last; 
    double avg; 
    in >> first; 
    while (in) 
  
    { 
        sum = 0; 
        in >> last; 
        for (i = 0; i<10; i++) 
        { 
            in >> a[i]; 
            sum += a[i]; 
        } 
  
        out << first << " " << last << " "; 
        for (i = 0; i<10; i++) 
            out << a[i] << " "; 
        avg = sum / 10.00; 
        out << std::setprecision(2) << std::fixed << avg << endl; 
        in >> first; 
    } 

return 0;
} 
*/