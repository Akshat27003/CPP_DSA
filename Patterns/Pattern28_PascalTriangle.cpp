#include<iostream>
using namespace std;

int main()
{
    /*
    for n=7, print:
        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
        1 5 10 10 5 1
        1 6 15 20 15 6 1
    */

    int n;
    cin>>n;

    //1 based implementation.
    for(int rows=1;rows<=n;rows+=1)
    {
        int ans=1;
        for(int cols=1;cols<=rows;cols+=1)
        {
            cout<<ans<<" ";
            ans=(ans*(rows-cols))/cols;
        }
        cout<<endl;
    }


    cout<<endl;
    //0 based implementation
    for(int rows=0;rows<n;rows+=1)
    {
        int ans=1;
        for(int cols=0;cols<(rows+1);cols+=1)
        {
            cout<<ans<<" ";
            ans=(ans*(rows-cols))/(cols+1);
        }
        cout<<endl;
    }
    return 0;
}
