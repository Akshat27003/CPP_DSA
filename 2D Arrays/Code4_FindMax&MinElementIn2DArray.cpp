#include<iostream>
#include<climits>
using namespace std;

//implementing function to find max element in a 2D Array.
int findMax(int arr[][8],int rows,int cols)
{
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

//implementing function to find min element in a 2D Array.
int findMin(int arr[][8],int rows,int cols)
{
    int mini=INT_MAX;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{
    int arr[8][8];
    //input no of rows and cols
    int m,n;
    cin>>m>>n;

    //taking input in the array
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //storing values returned by the functions.
    int maxNum=findMax(arr,m,n);
    int minNum=findMin(arr,m,n);

    //printing maximum and minimum elements.
    cout<<"Maximum Element in the Array is: "<<maxNum<<endl;
    cout<<"Minimum Element in the Array is: "<<minNum<<endl;
    return 0;
}
