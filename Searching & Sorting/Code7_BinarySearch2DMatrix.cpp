#include<iostream>
#include<vector>
using namespace std;

bool binary2D(vector<vector<int>> arr,int key)
{
    int s=0;
    int rows=arr.size();
    int cols=arr[0].size();
    int e=(rows*cols)-1;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        int rowIndex=mid/cols;
        int colIndex=mid%cols;
        if(arr[rowIndex][colIndex]==key)
        {
            cout<<"Found at row: "<<rowIndex<<" col: "<<colIndex<<endl;
            return true;
        }
        else if(arr[rowIndex][colIndex]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}

int main()
{
    int n,m;
    cout<<"Enter no. of rows and cols: "<<endl;
    cin>>n>>m;

    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter values: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter element to find: "<<endl;
    cin>>target;

    //function call for binary search 2d matrix.
    if(binary2D(arr,target))
    {
        cout<<"Element Found! "<<endl;
    }
    else
    {
        cout<<"Element not found! "<<endl;
    }


    return 0;
}
