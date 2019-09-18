#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Please supply your score: ";
    cin>>score;
    if(score >= 75 && score <= 100) cout<<"Your Grade is A";
    else if(score >= 70 && score <= 74) cout<<"Your Grade is AB";
    else if(score >= 65 && score <= 69) cout<<"Your Grade is B";
    else if(score >= 60 && score <= 64) cout<<"Your Grade is BC";
    else if(score >= 55 && score <= 59) cout<<"Your Grade is C";
    else if(score >= 50 && score <= 54) cout<<"Your Grade is CD";
    else if(score >= 45 && score <= 49) cout<<"Your Grade is D";
    else if(score >= 40 && score <= 44) cout<<"Your Grade is E";
    else if(score >= 0 && score <= 39) cout<<"Your Grade is F";
    else cout<<"Invalid score supplied";

    cout<<"\n\n";
    return 0;
}
