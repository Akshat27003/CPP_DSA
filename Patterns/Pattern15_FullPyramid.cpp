#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
            *
           * *
          * * *
         * * * *
        * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *
    */
    int n;
    cin>>n;

    //upper half.
    for(int rows=0;rows<n;rows+=1)
    {
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        for(int stars=0;stars<(rows+1);stars+=1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half:
    for(int rows=0;rows<n;rows+=1)
    {
        for(int spaces=0;spaces<rows;spaces+=1)
        {
            cout<<" ";
        }
        for(int stars=0;stars<(n-rows);stars+=1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
