#include<iostream>
using namespace std;

int evenNoSum(int n)
{
    int sum=0;
    for(int i=2;i<=n;i+=2)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    int ans=evenNoSum(n);
    cout<<ans<<endl;

    return 0;
}
