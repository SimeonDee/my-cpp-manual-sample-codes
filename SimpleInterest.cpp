#include<iostream>
using namespace std;
int main()
{
    //Body of the main function. Codes goes here
    float interest, principal, rate;
    int the_time;

    principal = 25000;
    rate = 6.7;
    the_time = 6;
    interest = (principal * rate *the_time) / 100;
    cout<<"The Simple Interest = "<<interest<<"\n\n";
    return 0;
}
