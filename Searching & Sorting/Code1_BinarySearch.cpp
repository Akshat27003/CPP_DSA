#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr,int key)
{
    int startIndex=0;
    int endIndex=arr.size()-1;
    //int mid=(startIndex+endIndex)/2; // (start+end) might get out of range of int and lead to overflow.
    int mid=startIndex+(endIndex-startIndex)/2; //this will solve the issue.. just rearranging the expression.

    while(startIndex<=endIndex)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            startIndex=mid+1;
        }
        else
        {
            endIndex=mid-1;
        }
        mid=startIndex+(endIndex-startIndex)/2;
    }
    //if element not in array.
    return -1;
}


int main()
{
    int n;
    cout<<"Enter no of elements: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to find in the array/vector: "<<endl;
    cin>>target;

    int index=binarySearch(arr,target);

    if(index==(-1))
    {
        cout<<"Element not found in array!"<<endl;
    }
    else
    {
        cout<<"The element "<<target<<" is present at "<<index<<"th index in the array"<<endl;
    }
    return 0;
}
