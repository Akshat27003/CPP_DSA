class Solution {
public:

    bool isPossibleSolution(vector<int>& stalls,int k,int sol)
    {
        int c=1;
        int pos=stalls[0];
        for(int i=1;i<stalls.size();i++)
        {
            if((stalls[i]-pos)>=sol)
            {
                c++;
                pos=stalls[i];
            }
            if(c==k)
            {
                return true;
            }
        }
        return false;
    }


    int solve(int n, int k, vector<int> &stalls) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int s=0;
        int e=stalls[stalls.size()-1]-stalls[0];

        int ans=-1;

        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossibleSolution(stalls,k,mid))
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
};
