#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3, ans = 0;
    num1 = 102;
    num2 = 150;
    num3 = num1;
    cout<<"num1"<<"\t"<<"num2"<<"\t"<<"num3"<<"\t"<<"ans"<<"\t"<<"i"<<"\n\n";
    cout<<num1<<"\t"<<num2<<"\t"<<num3<<"\t"<<ans<<"\n";
    for(int i = 10; i > 1; i--)
    {
        num3 = 480 - (num2 + 14);
        num2 += i;
        num1 = num3 - num2;
        ans = num1 + num2 + num3;
        cout<<num1<<"\t"<<num2<<"\t"<<num3<<"\t"<<ans<<"\t"<<i<<"\n";
    }
    return 0;
}
