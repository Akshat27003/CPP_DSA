#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m1,n1;
    cout<<"Enter rows and cols of first matrix: "<<endl;
    cin>>m1>>n1;

    vector<vector<int>> mat1(m1,vector<int>(n1));
    cout<<"Enter elements of the first matrix: "<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>mat1[i][j];
        }
    }

    int m2,n2;
    cout<<"Enter rows and cols of second matrix: "<<endl;
    cin>>m2>>n2;

    vector<vector<int>> mat2(m2,vector<int>(n2));
    cout<<"Enter elements of the second matrix: "<<endl;
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>mat2[i][j];
        }
    }

    //solution matrix: TC: O(n^3).
    if(m2==n1)
    {
        vector<vector<int>> ans(m1,vector<int>(n2));
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                ans[i][j]=0;
                for(int k=0;k<n1;k++)
                {
                    ans[i][j]+=mat1[i][k]*mat2[k][j];
                }
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Multiplication Not Possible! "<<endl;
    }




    return 0;
}
