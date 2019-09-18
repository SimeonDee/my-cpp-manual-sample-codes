#include<iostream>
using namespace std;
//Function Cube()
int cube(int x)
{
    return (x * x * x);
}

//Function getInterest
double getInterest(float principal, float rate, int the_time)
{
    return((principal * rate * the_time) / 100);
}

int main()
{
    int val, valCube, tim; double interest;
    float princ, rat;
    cout<<"Supply a value to return its cube: ";
    cin>>val;
    cout<<"Enter the principal amount, Interest rate and duration: ";
    cin>>princ>>rat>>tim;
    cout<<"\n\nThe Cube of "<<val<<" = "<<cube(val)<<"\n";  //Cube() invoked
    cout<<"\nGiven the Principal as "<<princ<<" naira, Intr. rate at "<<rat<<"% and ";
    cout<<tim<<"years payback time, \nThe Interest is = ";
    cout<<getInterest(princ,rat,tim)<<"\n\n";   //getInterest invoked

    return 0;
}
