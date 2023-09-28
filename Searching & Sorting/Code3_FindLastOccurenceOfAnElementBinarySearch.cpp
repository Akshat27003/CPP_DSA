#include<iostream>
#include<vector>
using namespace std;

int lastOccurrence(vector<int> &arr,int key)
{
    int startIndex=0;
    int endIndex=arr.size()-1;
    int mid=startIndex+(endIndex-startIndex)/2; //this will solve the issue.. just rearranging the expression.

    int index=-1; //if element not in array.

    while(startIndex<=endIndex)
    {
        //if element found, storing the index and searching in the right search space for more occurrences, if any are there post mid.
        if(arr[mid]==key)
        {
            index=mid;
            startIndex=mid+1;
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
    return index;
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

    int index=lastOccurrence(arr,target);

    if(index==(-1))
    {
        cout<<"Element not found in array!"<<endl;
    }
    else
    {
        cout<<"The element "<<target<<" has last occurrence at "<<index<<"th index in the array"<<endl;
    }
    return 0;
}
