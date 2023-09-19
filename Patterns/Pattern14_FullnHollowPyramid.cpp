#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5,print:
            *
           * *
          *   *
         *     *
        *********
    */
    int n;
    cin>>n;

    //FULL PYRAMID
    //approach 1: dividing pattern based upon what to print.
    for(int rows=0;rows<n;rows+=1)
    {
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        for(int stars=0;stars<((2*rows)+1);stars+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    //approach 2: dividing pattern into a grid and then taking care of printing using conditions.
    for(int rows=0;rows<n;rows+=1)
    {
        int k=0;
        for(int cols=0;cols<((2*n)-1);cols+=1)
        {
            if(cols<(n-rows-1))
            {
                cout<<" ";
            }

            else if(k<((2*rows)+1))
            {
                cout<<"*";
                k=k+1;
            }

            //irrelevant spaces
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;

    //HOLLOW PYRAMID
    //Approach 1:
    for(int rows=0;rows<n;rows+=1)
    {
        int k=0;
        for(int cols=0;cols<((2*n)-1);cols+=1)
        {
            if(cols<(n-rows-1))
            {
                cout<<" ";
            }

            else if(k<((2*rows)+1))
            {
                if(k==0 || k==2*rows || rows==n-1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                k+=1;
            }

            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    //Approach 2: (simpler).
    for(int rows=0;rows<n;rows+=1)
    {
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        for(int stars=0;stars<((2*rows)+1);stars+=1)
        {
            if(stars==0 || stars==(2*rows) || rows==(n-1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
