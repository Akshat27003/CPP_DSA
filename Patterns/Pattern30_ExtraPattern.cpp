#include<iostream>
using namespace std;

int main()
{
    /*
    for=4, print:
        3
        44
        555
        6666
        555
        44
        3
    */

    int n;
    cin>>n;

    for(int rows=0;rows<((2*n)-1);rows+=1)
    {
        int val;
        if(rows<n)
        {
            val=rows+3;
            for(int cols=0;cols<(rows+1);cols+=1)
            {
                cout<<val;
            }
            cout<<endl;
        }
        else
        {
            val=val-1;
            for(int cols=0;cols<((2*n)-rows-1);cols+=1)
            {
                cout<<val;
            }
            cout<<endl;
        }

    }

    return 0;
}
