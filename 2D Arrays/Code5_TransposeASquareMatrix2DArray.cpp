#include<iostream>
using namespace std;


//transpose function
void transposeMatrix(int arr[][5],int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<cols;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
}

//transpose function 2
void transposeMatrix2(int arr[][5],int rows, int cols, int transpose[][5])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }
}

//print function
void printMatrix(int arr[][5],int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[5][5];
    //input no of rows and cols.. (mxm matrix)
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

    //calling transpose function 1
    transposeMatrix(arr,m,n);

    //calling print function
    cout<<"The Matrix after transpose: "<<endl;
    printMatrix(arr,m,n);

    int transpose[5][5];
    //calling transpose function 2
    transposeMatrix2(arr,m,n,transpose);

    //calling print function to get the original matrix:
    cout<<"The Original Matrix after another transpose: "<<endl;
    printMatrix(transpose,m,n);

    return 0;
}
