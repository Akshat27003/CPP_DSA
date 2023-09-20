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
    while(startIndex<=endIndex)
    {
        //swapping values and making changes to original array.
        int temp=arr[startIndex];
        arr[startIndex]=arr[endIndex];
        arr[endIndex]=temp;
        startIndex++;
        endIndex--;
    }

    //printing reversed array:
    cout<<"Reversed Array Is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    //printing the reversed array itself in reverse:
    cout<<endl;
    cout<<"Reversed Array in Reversed Order is: "<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    //swapping values again and getting the original array back
    startIndex=0;//initializing values again.
    endIndex=n-1;
    while(startIndex<=endIndex) // <= not required. works fine even with < only.
    {
        swap(arr[startIndex],arr[endIndex]); //using swap function.
        startIndex++;
        endIndex--;
    }

    cout<<"After Reversing Again, the original array retrieved is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
