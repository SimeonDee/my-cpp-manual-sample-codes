#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //Body of the main function. Codes goes here
    string myname;
    ofstream outputFileHandler;
    ifstream inputFileHandler;
    string eachName;
    int namecount;

    //Writing to an external file
    cout<<"How many names do you want to enter? ";
    cin>>namecount;
    outputFileHandler.open("myFile.txt");
    if (outputFileHandler.is_open())
    {
        for(int i=1; i<=namecount; i++)
        {
            cout<<"Enter name: ";
            cin>>myname;
            outputFileHandler<<myname<<"\n";
        }
        outputFileHandler.close();
    }

    //Reading from an external file
    inputFileHandler.open("myFile.txt");
    if (inputFileHandler.is_open())
    {
        cout<<"\n\nThe File Contents are Displayed Below\n";
        cout<<"*************************************\n";
        while(getline(inputFileHandler, eachName))
        {
            cout<<eachName<<"\n";
        }
        inputFileHandler.close();
    }
    else{ cout<<"Unable to open text file";}

    return 0;
}
