#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    bool output=checkPrime(n);
    if(output)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
