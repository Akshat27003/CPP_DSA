#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int key)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(mid-1>=s && arr[mid-1]==key)
        {
            return (mid-1);
        }
        else if(mid+1<=e && arr[mid+1]==key)
        {
            return (mid+1);
        }
        else if(key>arr[mid])
        {
            s=mid+2; //mid+1 already check
        }
        else
        {
            e=mid-2; //mid-1 already checked.
        }
        mid=s+(e-s)/2;
    }
    //if element not found
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

    int target;
    cin>>target;

    int ans=binarySearch(arr,target);
    cout<<"target element present at index: "<<ans<<endl;
    return 0;
}
