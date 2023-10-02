#include<iostream>
#include<vector>
using namespace std;

//applications in finding element in unbounded or infinite array where we dont know size of input array or end index.
//TC: O(log i) + O(log m).. log i for finding the sub array and log m for applying binary search.

int binarySearch(vector<int> arr,int s,int e,int key)
{
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int expSearch(vector<int> arr,int n,int key)
{
    if(arr[0]==key)
    {
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=key)
    {

        i=i*2;
    }

    return binarySearch(arr,i/2,min(i,(n-1)),key);
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

    int ans=expSearch(arr,n,target);

    cout<<"The element is present at the index: "<<ans<<endl;
    return 0;
}
