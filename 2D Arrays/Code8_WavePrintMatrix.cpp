#include<iostream>
#include<vector>
using namespace std;

//print function printing matrix column from top to bottom if even numbered column, printing from bottom to top if odd numbered column.
void wavePrint(vector<vector<int>> &v)
{
    int rows=v.size();
    int cols=v[0].size();
    for(int i=0;i<cols;i++)
    {
        if(i%2==0) //even numbered column
        {
            for(int j=0;j<rows;j++) //top to bottom print
            {
                cout<<v[j][i]<<" ";
            }
        }
        else //odd numbered column
        {
            for(int j=(rows-1);j>=0;j--)
            {
                cout<<v[j][i]<<" ";
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    wavePrint(v);

    return 0;
}
