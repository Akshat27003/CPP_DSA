#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n;
    cout<<"Enter no. of elements you want to enter (not more than 50) : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int noOfZeros=0;
    int noOfOnes=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            noOfZeros++;
        }
        if(arr[i]==1)
        {
            noOfOnes++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n No of Zeros in Array arr are: "<<noOfZeros<<endl;
    cout<<"No of Ones in Array arr are: "<<noOfOnes<<endl;
}
