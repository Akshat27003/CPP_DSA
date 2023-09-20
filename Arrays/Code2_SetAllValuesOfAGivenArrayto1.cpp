#include<iostream>
using namespace std;

int main()
{
    int arr[500];
    //input no. of elements.
    int n;
    cin>>n;

    //taking array input from user.
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //setting all values as 1.
    for(int i=0;i<n;i++)
    {
        arr[i]=1;
    }

    //printing the array.
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
