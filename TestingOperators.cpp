#include<iostream>
using namespace std;
int main()
{
    //Body of the main function. Codes goes here
    int a = 6, b = 10; bool ans;
    cout<<6 * 6<<"\n";
    cout<<23 % 7<<"\n";
    cout<<15 - 9<<"\n";
    ans = (6 >= 6);
    cout<<ans<<"\n";
    ans = (34 == ((6 * 6) - 2));
    cout<<ans<<"\n";
    ans = (12/3 == 2 * 2 && 3 < 12);
    cout<<ans<<"\n";
    cout<<b++<<"\n";
    a *= 3;
    cout<<"a = "<<a<<"\n";
    return 0;
}
