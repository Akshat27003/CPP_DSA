#include<iostream>
using namespace std;

int main()
{
    /*
    for n=6, print:
        * * * * * *
         * * * * *
          * * * *
           * * *
            * *
             *
    */
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        //spaces
        for(int spaces=0;spaces<rows;spaces+=1)
        {
            cout<<" ";
        }

        //stars
        for(int stars=0;stars<(n-rows);stars+=1)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}
