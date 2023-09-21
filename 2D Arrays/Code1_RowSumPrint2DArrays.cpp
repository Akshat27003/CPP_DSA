#include<iostream>
using namespace std;

//function to print row wise sum
void printRowSum(int arr[][8], int rows, int cols)
{
    cout<<"Row Wise Sum is: "<<endl;
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}


int main()
{
    int arr[8][8];
    int m,n;
    cout<<"Enter No. of rows (not more than 8): "<<endl;
    cin>>m;
    cout<<"Enter No. of cols (not more than 8): "<<endl;
    cin>>n;
    cout<<"Enter elements of the 2D Array: "<<endl;

    //taking array input
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //row wise printing
    cout<<"Row wise print 2D Array: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //function call
    printRowSum(arr,m,n);


    return 0;
}
