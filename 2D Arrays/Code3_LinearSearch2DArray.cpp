#include<iostream>
using namespace std;

//implementing linear search function
bool linearSearchIn2DArr(int arr[][8],int rows, int cols, int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    //value not present
    return false;
}

int main()
{
    int arr[8][8];
    //no of rows and cols
    int m,n;
    cin>>m>>n;

    //input values
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //enter element to find
    int target;
    cin>>target;

    if(linearSearchIn2DArr(arr,m,n,target))
    {
        cout<<"Element Found!"<<endl;
    }
    else
    {
        cout<<"Element Not Found!"<<endl;
    }
    return 0;
}
