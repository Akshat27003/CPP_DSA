#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
    */
    int n;
    cin>>n;

    //method 1: breaking pattern into halves and using different for loops for both.
    //upper half
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(rows+1);cols+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int rows=0;rows<(n-1);rows+=1)
    {
        for(int cols=0;cols<(n-rows-1);cols+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<endl;

    //method 2: use 1 for loop from 0 to 2*n-2 for rows. better and optimized.
    for(int rows=0;rows<=((2*n)-2);rows+=1)
    {
        int condition;
        if(rows<n)
        {
            condition=rows+1;
        }
        else
        {
            condition=2*n-rows-1;
        }

        //condition using ternary: rows<n ? (rows+1) : (2*n-rows-1);
        for(int stars=0;stars<condition;stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
