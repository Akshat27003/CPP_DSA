#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    //if a[] is {1,2,4,6,8,10,2} and b[] is {3,4,5,6}, answer will be: 1,2,4,6,8,10,3,5. 4 and 6 will not print twice. neither will 2.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=INT_MIN;
            }
        }
    }

    //traversing internally in 1st array for duplicates.
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=INT_MIN;
            }
        }
    }

    //traversing internally in 2nd array for duplicates.
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(b[i]==b[j])
            {
                b[j]=INT_MIN;
            }
        }
    }

    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=INT_MIN)
        {
            ans.push_back(a[i]);
        }
    }

    for(int i=0;i<m;i++)
    {
        if(b[i]!=INT_MIN)
        {
            ans.push_back(b[i]);
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}
