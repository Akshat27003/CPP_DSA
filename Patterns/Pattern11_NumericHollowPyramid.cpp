#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
            1
           1 2
          1   3
         1     4
        1 2 3 4 5
    */
    int n;
    cin>>n;


    //approach 1. simple
    for(int rows=0;rows<n;rows+=1)
    {
        //spaces
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        //numbers
        for(int cols=0;cols<=rows;cols+=1)
        {
            if(cols==0 || cols==rows || rows==(n-1))
            {
                cout<<(cols+1)<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //approach 2..
    for(int rows=0;rows<n;rows+=1)
    {
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<" ";
        }
        int start=1;
        for(int cols=0;cols<((2*rows)+1);cols+=1)
        {

            if(rows==0 || rows==(n-1))
            {
                if(cols%2==0)
                {
                    cout<<start;
                    start+=1;
                }
                else
                {
                    cout<<" ";
                }
            }

            else
            {
                if(cols==0)
                {
                    cout<<1;
                }
                else if(cols==(2*rows))
                {
                    cout<<(rows+1);
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
