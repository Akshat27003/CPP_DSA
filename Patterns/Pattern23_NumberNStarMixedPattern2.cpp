#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        ********1********
        *******2*2*******
        ******3*3*3******
        *****4*4*4*4*****
        ****5*5*5*5*5****
    */
    int n;
    cin>>n;


    //using formula: 2n-rows-2.
    for(int rows=0;rows<n;rows+=1)
    {
        //starting stars
        for(int stars=0;stars<((2*n)-rows-2);stars+=1)
        {
            cout<<"*";
        }

        //numbers and stars.
        for(int nums=0;nums<(rows+1);nums+=1)
        {
            cout<<(rows+1);
            if(nums!=rows)
            {
                cout<<"*";
            }
        }

        //ending stars.
        for(int stars=0;stars<((2*n)-rows-2);stars+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl;
    cout<<endl;
    //using formula: n-rows+3. for n=5, both give same result.. otherwise... the starting and ending stars differ.
    for(int rows=0;rows<n;rows+=1)
    {
        //starting stars
        for(int stars=0;stars<(n-rows+3);stars+=1)
        {
            cout<<"*";
        }

        //numbers and stars.
        for(int nums=0;nums<(rows+1);nums+=1)
        {
            cout<<(rows+1);
            if(nums!=rows)
            {
                cout<<"*";
            }
        }

        //ending stars.
        for(int stars=0;stars<(n-rows+3);stars+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
