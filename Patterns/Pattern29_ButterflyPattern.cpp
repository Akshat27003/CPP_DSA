 #include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */
    int n;
    cin>>n;

    //approach 1: using multiple for loops for upper and lower half:
    //upper half
    for(int rows=0;rows<n;rows+=1)
    {
        //stars
        for(int stars=0;stars<(rows+1);stars+=1)
        {
            cout<<"*";
        }

        //spaces
        for(int spaces=0;spaces<(2*(n-rows-1));spaces+=1)
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
    //lower half
    for(int rows=0;rows<n;rows+=1)
    {
        //stars
        for(int stars=0;stars<(n-rows);stars+=1)
        {
            cout<<"*";
        }

        //spaces
        for(int spaces=0;spaces<(2*rows);spaces+=1)
        {
            cout<<" ";
        }

        //stars
        for(int stars=0;stars<(n-rows);stars+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl;
    //approach 2: using single for loop for rows.
    for(int rows=0;rows<(2*n);rows+=1)
    {
        int stars,spaces;
        //upper half condition
        if(rows<n)
        {
            //stars
            for(stars=1;stars<=(rows+1);stars+=1)
            {
                cout<<"*";
            }

            //spaces
            for(spaces=1;spaces<=(2*(n-rows-1));spaces+=1)
            {
                cout<<" ";
            }

            //stars
            for(stars=1;stars<=(rows+1);stars+=1)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        //lower half conditions
        else
        {
            //stars
            for(stars=1;stars<=((2*n)-rows);stars+=1)
            {
                cout<<"*";
            }

            //spaces
            for(spaces=1;spaces<=(2*(rows-n));spaces+=1)
            {
                cout<<" ";
            }

            //stars
            for(stars=1;stars<=((2*n)-rows);stars+=1)
            {
                cout<<"*";
            }
            cout<<endl;
        }

    }

    return 0;
}
