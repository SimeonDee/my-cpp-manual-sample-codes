#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float total = 0.01;

    for(int i=1; i<=27; i++){
        total *= 2;
    }

    cout<<"Total="<<round(total)<<"\n";
    return 0;
}
