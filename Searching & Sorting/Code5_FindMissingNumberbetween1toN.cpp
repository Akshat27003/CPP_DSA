// CPP program to find the only missing element. n-1 elements given.
#include <iostream>
#include <vector>
using namespace std;

int findmissing(vector<int> &arr)
{
    int s=0;
    int e= arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e) {

        // taking care of the condition if mid-1 becomes -1.
        if(mid==0 && arr[mid]!=mid+1)
        {
            return 1;
        }

        //if mid index does not match with mid+1 but mid-1 matches with mid. mid+1 is the missing element
        if(arr[mid]!=mid+1 && arr[mid-1]==mid)
        {
            return (mid+1);
        }

        //if mid index doesnt match with mid+1, the missing element is already past. search in left.
        if(arr[mid]!=mid+1)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }

    // if no element is missing
    return -1;
}

// Driver code
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << findmissing(arr);
    return 0;
}
