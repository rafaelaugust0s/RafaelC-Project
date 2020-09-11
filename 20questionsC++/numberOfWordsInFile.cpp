#include <iostream>
#include <fstream>
#include <string>


using namespace std;

    const string filename= "paragraph.txt";
    const string Punct= ".?!,; ";


    int main(){



    int numWords,numChars;
    string word;

    cout<<"Enter the file name: "<<endl;
    string filename;
    cin>> filename;

    ifstream in_stream;
    in_stream.open ("paragraph.txt");

    if(in_stream)
    {
        int numWords=0, numChars=0;
        string word;
    }
    cout<< fixed << setprecision(0);

    while(in_stream>>word)
    {
        ++numWords;
        int len= word.size();

        if (Punct.find(word[len-1])!=string::npos)
        word.erase(len-1);
        numChars+= word.size();
    }

    in_stream.close();

    cout<<"This is my \"slash\" <--" <<endl;
    if (numWords<=1)
    {
        cout<< "There is"<< numWords<< "words in the file"<<filename<< "."<<endl;
    }

    else{
                cout<< "There are: \n"<< numWords<< "\n words in the file: "<<filename<< "."<<endl;

    }

    return 0;
}