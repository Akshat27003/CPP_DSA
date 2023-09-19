#include<iostream>
using namespace std;

int maxNum(int a,int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=maxNum(a,b,c);
    cout<<ans<<endl;
    return 0;
}
