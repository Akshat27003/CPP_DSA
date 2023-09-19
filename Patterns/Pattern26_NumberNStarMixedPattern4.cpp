#include<iostream>
using namespace std;

int main()
{
    /*
    for n=4, print:
        1
        2*3
        4*5*6
        7*8*9*10
        7*8*9*10
        4*5*6
        2*3
        1
    */

    int n;
    cin>>n;


    //upper half
    int val=1;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<(rows+1);cols+=1)
        {
            cout<<val;
            if(cols!=rows)
            {
                cout<<"*";
            }
            val+=1;
        }
        cout<<endl;
    }

    val=val-n;
    for(int rows=0;rows<n;rows+=1)
    {
        int num=val;
        int cols;
        for(cols=0;cols<(n-rows);cols+=1)
        {
            cout<<num;
            num+=1;
            if(cols!=(n-rows-1))
            {
                cout<<"*";
            }
        }
        val=val-cols+1;
        cout<<endl;
    }
    return 0;
}
