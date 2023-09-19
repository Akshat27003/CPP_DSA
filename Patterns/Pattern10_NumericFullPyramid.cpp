#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    /*
    for n=5, print:
            1
           232
          34543
         4567654
        567898765
    */

    for(int rows=0;rows<n;rows+=1)
    {
        //spaces
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<"  ";
        }

        int val=rows+1;
        //increasing numbers
        for(int cols=0;cols<=rows;cols+=1)
        {
            cout<<val<<" ";
            val=val+1;
        }

        //decreasing numbers
        val=val-2;
        for(int cols=0;cols<rows;cols+=1)
        {
            cout<<val<<" ";
            val=val-1;
        }
        cout<<endl;
    }

    cout<<endl;
    //approach 2 (using 2 internal loops):
    for(int rows=0;rows<n;rows+=1)
    {
        //spaces
        for(int spaces=0;spaces<(n-rows-1);spaces+=1)
        {
            cout<<"  ";
        }

        //numbers
        int val=rows+1;
        int breakpoint=((2*rows)+1)/2;
        for(int nums=0;nums<(2*rows)+1;nums+=1)
        {
            cout<<val<<" ";
            if(nums<breakpoint) val=val+1;
            else val=val-1;
        }
        cout<<endl;
    }

    return 0;
}
