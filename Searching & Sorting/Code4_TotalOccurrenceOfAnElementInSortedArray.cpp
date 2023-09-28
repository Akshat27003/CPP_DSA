#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Size of array: "<<endl;
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Give the element whose number of occurrences you want to find: "<<endl;
    cin>>target;

    //lower bound used to find first occurrence. returns iterator to the first occurrence of element greater than or equal to target.
    auto ans1=lower_bound(arr.begin(),arr.end(),target);
    int first=ans1-arr.begin(); //managing iterator arithmetic
    cout<<first<<endl;

    //upper bound used to find first occurrence. returns iterator to the first occurrence of element greater than target.
    auto ans2=upper_bound(arr.begin(),arr.end(),target);
    int last=ans2-arr.begin()-1; //managing iterator arithmetic. to find last occurrence of the element, we have to do -1 from result.
    cout<<last<<endl;

    int noOfOccurrences=last-first+1;

    cout<<"The element "<<target<<" occurs "<<noOfOccurrences<<" times in the given array"<<endl;

    return 0;
}
