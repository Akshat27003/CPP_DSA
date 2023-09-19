#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        *
        *1*
        *121*
        *12321*
        *1234321*
        *123454321*
        *1234321*
        *12321*
        *121*
        *1*
        *
    */
    int n;
    cin>>n;

    //first star
    cout<<"*"<<endl;

    //upper half
    for(int rows=0;rows<n;rows+=1)
    {
        //stars and increasing pattern.
        int cols;
        for(cols=0;cols<(rows+1);cols+=1)
        {
            if(cols==0)
            {
                cout<<"*";
            }
            cout<<(cols+1);
        }

        //decreasing pattern.
        cols=cols-1;
        for(;cols>=1;cols-=1)
        {
            cout<<cols;
            if(cols==1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //lower half
    for(int rows=0;rows<(n-1);rows+=1)
    {
        //increasing pattern
        int cols;
        for(cols=0;cols<(n-rows-1);cols+=1)
        {
            if(cols==0)
            {
                cout<<"*";
            }
            cout<<(cols+1);
        }

        //decreasing pattern
        cols=cols-1;
        for(;cols>=1;cols-=1)
        {
            cout<<cols;
            if(cols==1)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //last star
    cout<<"*"<<endl;


    cout<<endl;
    cout<<endl;


    // similar pattern working for different value of n differently. By different and better approach.
    /*
        for n=5, print:
            *
            *1*
            *121*
            *12321*
            *121*
            *1*
            *
    */

    cout<<"*"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"*"; //star at the start of each row
        int condition=i<=(n/2) ? 2*i : 2*(n-i-1); //for determining shrinking of rows (no of cols).
        for(int j=0;j<=condition;j++)
        {
            if(j<=(condition/2)) //for decrease of values in row.
            {
                cout<<(j+1);
            }
            else
            {
                cout<<(condition-j+1);
            }
        }
        cout<<"*"; //star at the end of each row.
        cout<<endl;
    }
    cout<<"*"<<endl;

    return 0;
}
