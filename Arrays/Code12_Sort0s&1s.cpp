#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int endIndex=arr.size()-1;
    for(int i=0;i!=endIndex;) //i<arr.size() wont work as endIndex will keep shifting and after crossing i, the reverse effect of swapping will take place.
    {
        if(arr[i]==0)
        {
            i++;
            continue;
        }
        if(arr[i]==1)
        {
            swap(arr[i],arr[endIndex]);
            endIndex--;
        }
    }

    for(auto val : arr)
    {
        cout<<val<<" ";
    }
}
