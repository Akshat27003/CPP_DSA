#include<iostream>
using namespace std;

int main()
{
    int arr[15];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int startIndex=0;
    int endIndex=n-1;
    while(startIndex<=endIndex) //works for both odd and even number of elements in array.
    {
        if(startIndex==endIndex)
        {
            cout<<arr[startIndex]<<" ";
        }
        else
        {
            cout<<arr[startIndex]<<" ";
            cout<<arr[endIndex]<<" ";
        }
        startIndex++;
        endIndex--;
    }
    return 0;
}
