#include<iostream>
using namespace std;

int main()
{
    /*
    for n=6, print:
        ******
        *****
        ****
        ***
        **
        *
    */
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows+=1)
    {
        for(int cols=0;cols<n-rows;cols+=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
