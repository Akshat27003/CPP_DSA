#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cookRanks,int nP,int sol)
{
    int curr=0;
    for(int i=0;i<cookRanks.size();i++)
    {
        int j=1;
        int timeTaken=0;
        int rankOfCurrCook=cookRanks[i];
        while(true)
        {
            if((timeTaken+(j*rankOfCurrCook))<=sol)
            {
                ++curr;
                timeTaken+=(j*rankOfCurrCook);
                ++j;
            }
            else
            {
                break;
            }
        }
        if(curr>=nP)
        {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> cookRanks,int nP)
{
    int s=0;
    int highestRank=*max_element(cookRanks.begin(),cookRanks.end());
    int e=highestRank*(nP*(nP+1)/2);

    int ans=-1;

    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossibleSolution(cookRanks,nP,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int nP,nC;
        cin>>nP>>nC;

        vector<int> cookRanks;

        while(nC--)
        {
            int ranking;
            cin>>ranking;
            cookRanks.push_back(ranking);
        }

        cout<<minTimeToCompleteOrder(cookRanks,nP)<<endl;
    }

    return 0;
}
