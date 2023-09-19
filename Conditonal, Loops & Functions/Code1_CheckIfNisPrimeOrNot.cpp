#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"Not Prime Nor Composite";
    }
    else
    {
        int i=2;
        bool flag=true;
        while(i<n)
        {
            if(n%i==0)
            {
                cout<<"Not Prime";
                flag=false;
                break;
            }
            i=i+1;
        }
        //following line executes if n was not divisible by anything between 2 and n-1 (both inclusive).
        if(flag)
        {
            cout<<"Prime";
        }
    }
    return 0;
}
