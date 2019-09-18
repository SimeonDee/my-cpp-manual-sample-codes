#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float adj, opp, hyp;
    cout<<"Enter the length of the opposite side: ";
    cin>>opp;
    cout<<"Enter the length of the adjacent side: ";
    cin>>adj;
    hyp = sqrt(pow(opp, 2) + pow(adj, 2));
    cout<<"\nThe Hypoteneus = "<<hyp<<"\n\n";
    return 0;
}
