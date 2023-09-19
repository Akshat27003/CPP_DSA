#include<iostream>
using namespace std;

int main()
{
    /*
    square pattern:
    rows=m(3), cols(n)=n(5):
    * * * * *
    *       *
    * * * * *
    */
    int m,n;
    cin>>m>>n;
    //approach 1. all rows combined.
    for(int rows=0;rows<m;rows+=1)
    {
        for(int cols=0;cols<n;cols+=1)
        {
            if(rows==0 || cols==0 || rows==m-1 || cols==n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    //approach 2. dealing with rows specifically.
    for(int rows=0;rows<m;rows+=1)
    {
        //handling first and last rows.
        if(rows==0 || rows==m-1)
        {
            for(int cols=0;cols<n;cols+=1)
            {
                cout<<"* ";
            }
        }

        //handling all rows in between
        else
        {
            cout<<"* ";
            for(int cols=0;cols<n-2;cols+=1)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}
