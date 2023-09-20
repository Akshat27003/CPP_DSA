#include<iostream>
using namespace std;

int main()
{
    int arr[500];
    int n;
    cout<<"Enter no. of elements you want to enter (max 500): "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //way 1. making another array called answer and storing double the values of array arr in it.
    int answer[500];
    for(int i=0;i<n;i++)
    {
        answer[i]=arr[i]*2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<answer[i]<<" ";
    }

    cout<<endl;
    //directly printing from array arr.
    for(int i=0;i<n;i++)
    {
        cout<<(arr[i]*2)<<" ";
    }
    return 0;
}
