#include<iostream>
#include<vector>
using namespace std;

//implementing transpose function
void getTranspose(vector<vector<int>> &arr,vector<vector<int>> &transpose)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
}

//implementing print function
void printMatrix(vector<vector<int>> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    //input no of rows and columns
    int m,n;
    cin>>m>>n;

    //declaring vector with relevant size.
    vector<vector<int>> arr(m,vector<int>(n)); //mxn size.

    //input values in the vector
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //print before transpose
    cout<<"The original matrix is: "<<endl;
    printMatrix(arr);

    //transposing matrix with the transpose function.
    vector<vector<int>> transpose(n,vector<int>(m)); //nxm matrix.
    getTranspose(arr,transpose);

    //print transpose
    cout<<"The transpose of the matrix is: "<<endl;
    printMatrix(transpose);
    return 0;
}
