#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i, j;
    for(i = 2; i <=30; i++)
    {
        for(j=3; j<= ceil(i/2); j++)
        {
            if(i%j == 0)
            {
                ;
            }
        }
        cout<<i<<"\t";


    }
    return 0;
}
