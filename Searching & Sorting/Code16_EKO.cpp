#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int>& trees,int m,int mid)
{
    long long int woodCollected=0;
    for(long long int i=0;i<trees.size();i++)
    {
        if(trees[i]>mid)
        {
            woodCollected+=trees[i]-mid;
        }
    }
    return (woodCollected>=m);
}

int maxSawbladeHeight(vector<long long int>& trees, long long int m)
{

    long long int s=0;
    long long int e=*max_element(trees.begin(),trees.end());
    long long int ans=-1;

    while(s<=e)
    {
        long long int mid=s+(e-s)/2;

        if(isPossibleSolution(trees,m,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

int main()
{
    long long int n,m;
    cin>>n>>m;

    vector<long long int> trees;

    while(n--)
    {
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<maxSawbladeHeight(trees,m)<<endl;

    return 0;
}
