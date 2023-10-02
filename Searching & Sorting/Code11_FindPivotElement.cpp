#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        //if only one element is there.
        if(s==e)
        {
            return s;
        }

        //if mid is pivot
        if(mid+1<=e && arr[mid]>arr[mid+1])
        {
            return mid;
        }

        //if element right next to pivot is mid
        if(mid-1>=0 && arr[mid-1]>arr[mid])
        {
            return (mid-1);
        }

        if(arr[s]>arr[mid])
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=findPivot(arr);

    cout<<"Pivot Element index is: "<<ans<<endl;
    cout<<"Pivot Element is: "<<arr[ans]<<endl;
    return 0;
}
