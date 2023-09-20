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

    int maxNum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum=arr[i];
        }
    }
    cout<<maxNum<<endl;
    return 0;
}
