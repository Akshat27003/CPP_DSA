#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //vector of size defined by user
    vector<int> arr(n);

    //input values into the vector
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //printing the vector.
    cout<<"The Array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //moving all negative to start or left side. 2 Pointer approach. TC: O(n). SC: O(1)
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[high]>0)
        {
            high--;
        }
        else
        {
            swap(arr[low],arr[high]);
        }
    }

    cout<<"The Array after moving all negative to left is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
