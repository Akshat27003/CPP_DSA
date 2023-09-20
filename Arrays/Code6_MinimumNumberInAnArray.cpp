#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[15];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int minNum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minNum)
        {
            minNum=arr[i];
        }
    }
    cout<<minNum<<endl;
    return 0;
}
