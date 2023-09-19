#include<iostream>
using namespace std;

int main()
{

    /*
    for n=5, print:
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
    */
    int n;
    cin>>n;

    //upper half:
    for(int rows=0;rows<n;rows+=1)
    {
        //stars
        for(int stars1=0;stars1<(n-rows);stars1+=1)
        {
            cout<<"*";
        }

        //spaces
        for(int spaces=0;spaces<(2*rows);spaces+=1)
        {
            cout<<" ";
        }

        //stars
        for(int stars2=0;stars2<(n-rows);stars2+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int rows=0;rows<n;rows+=1)
    {
        //stars
        for(int stars=0;stars<(rows+1);stars+=1)
        {
            cout<<"*";
        }

        //spaces
        for(int spaces=0;spaces<((2*n)-(2*rows)-2);spaces+=1)
        {
            cout<<" ";
        }

        //stars
        for(int stars=0;stars<(rows+1);stars+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
