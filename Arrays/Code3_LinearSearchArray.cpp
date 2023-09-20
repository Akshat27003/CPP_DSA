#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    //if elt not present.
    return -1;
}

int main()
{
    int arr[50];
    int n;
    cout<<"Enter no. of elts in the array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int eltToFind;
    cin>>eltToFind;
    int index=linearSearch(arr,n,eltToFind);
    cout<<"The element is present at index: "<<index;

    return 0;
}
