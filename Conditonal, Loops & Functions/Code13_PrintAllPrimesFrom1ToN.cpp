#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bool output=checkPrime(i);
        if(output)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
