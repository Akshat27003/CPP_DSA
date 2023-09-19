#include<iostream>
using namespace std;

int main()
{
    /*
    for n=5, print:
        1
        2*2
        3*3*3
        4*4*4*4
        5*5*5*5*5
        5*5*5*5*5
        4*4*4*4
        3*3*3
        2*2
        1
    */

    int n;
    cin>>n;

    //upper half
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<rows+1;cols+=1)
        {
            if(cols!=rows)
            {
                cout<<(rows+1)<<"*";
            }
            else
            {
                cout<<(rows+1);
            }
        }
        cout<<endl;
    }

    //lower half
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(n-rows);cols+=1)
        {
            if(cols!=(n-rows-1))
            {
                cout<<(n-rows)<<"*";
            }
            else
            {
                cout<<(n-rows);
            }
        }
        cout<<endl;
    }
    return 0;
}
