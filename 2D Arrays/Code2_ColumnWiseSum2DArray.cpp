#include<iostream>
#include<vector>
using namespace std;

//function to store column wise sum in a vector and returning the vector instead of direct printing.
vector<int> columnWiseSum(int arr[][8], int rows, int cols)
{
    vector<int>colSum;
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=arr[j][i];
        }
        colSum.push_back(sum); //pushing the values of column wise sum to the vector.
    }
    return colSum;
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
    cout<<"Column wise print 2D Array: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    //function call and storing in a vector as function returns a vector.
    vector<int> ans=columnWiseSum(arr,m,n);

    cout<<"Column wise sum is: "<<endl;
    //printing the elements of the vector.
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}
