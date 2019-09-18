#include<iostream>
using namespace std;
int main()
{
    //Body of the main function. Codes goes here
    float interest, principal, rate;
    int the_time;

    cout<<"Enter the principal value: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"For how many years? ";
    cin>>the_time;

    interest = (principal * rate * the_time) / 100;
    cout<<"\nThe Simple Interest = "<<interest<<"\n\n";
    return 0;
}
