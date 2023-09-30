#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        //single element
        if(s==e)
        {
            return s;
        }

        //mid at even index
        if(mid%2==0)
        {
            //if even and odd index element is same, we are in left, we move to right search space.
            if(arr[mid]==arr[mid+1])
            {
                s=mid+2;
            }
            //if even and odd index element are different, even element is either the answer or we are in the right of the answer.
            else
            {
                e=mid; //covers the case of both mid being the ans or searching in the left search space.
            }
        }
        //if mid is odd
        else
        {
            //checking if even odd pair exists. if it does, answer is in right search
            if(arr[mid]==arr[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1; //ans cant be at odd index so we dont have to worry about it. we are sure that odd even pair exists and answer is in left.
            }
        }
        mid=s+(e-s)/2;
    }return -1;
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

    int ans=solve(arr);

    cout<<"Index of the odd occurring element is: "<<ans<<endl;
    cout<<"Value of the odd occurring element is: "<<arr[ans]<<endl;
    return 0;
}
