#include<iostream>
using namespace std;
int main()
{
    int lowerLimit, upperLimit, odd;

    cout<<"Please supply the lower bound: ";
    cin>>lowerLimit;
    cout<<"Please supply the upper bound: ";
    cin>>upperLimit;

    if (lowerLimit > upperLimit)    //Swap them
    {
        int temp = lowerLimit;
        lowerLimit = upperLimit;
        upperLimit = temp;
    }
    cout<<"\nBelow are the odd numbers between "<<lowerLimit;
    cout<<" and "<<upperLimit<<"\n";
    for(int counter = lowerLimit; counter <= upperLimit; counter++)
    {
        if(counter % 2 == 1) cout<<counter<<", ";
    }

    cout<<"\n\n";
    return 0;
}
