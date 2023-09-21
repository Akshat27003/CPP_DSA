#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //declaring 2D Vector i.e. a Vector of Vectors.
    vector<vector<int> > arr;

    //pushing values in 2D Vector.
    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    //printing the 2D Vector.. accessing no of rows and cols.
    cout<<"Printing the vector"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //2D Vector declaration way 3:
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> arr2(rows,vector<int>(cols,101));

    //printing the 2D Vector.. accessing no of rows and cols.
    cout<<"Printing the vector"<<endl;
    for(int i=0;i<arr2.size();i++)
    {
        for(int j=0;j<arr2[i].size();j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    //declaring 2D Vector with value of no of rows and cols.
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr3;

    //pushing values into 2D Vector:
    int value=10;
    for(int i=0;i<m;i++)
    {
        vector<int> nums;
        for(int j=0;j<n;j++)
        {
            nums.push_back(value);
        }
        arr3.push_back(nums);
    }

    //printing the 2D Vector.
    cout<<"Printing the vector"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    //declaring 2D Vector with value of no of rows and cols.
    int x,y;
    cin>>x>>y;
    vector<vector<int>> arr4(x,vector<int>(y)); //vector of x rows and each index containing vectors of y elements.

    //adding values input by user
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr4[i][j];
        }
    }

    //printing the 2D Vector.
    cout<<"Printing the vector"<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<arr4[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
