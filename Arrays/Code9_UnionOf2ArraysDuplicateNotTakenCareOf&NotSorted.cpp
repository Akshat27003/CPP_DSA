#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[20];
    int b[20];
    int n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }


    vector<int> ans;
    for(int i=0;i<n1;i++)
    {
        ans.push_back(a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        ans.push_back(b[i]);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
