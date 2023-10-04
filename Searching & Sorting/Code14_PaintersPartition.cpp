class Solution
{
  public:

    bool isPossibleSolution(int arr[],int n,int k,long long sol)
    {
        int c=1;
        int timeCount=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sol)
            {
                return false;
            }
            if((arr[i]+timeCount)>sol)
            {
                c++;
                timeCount=arr[i];
                if(c>k)
                {
                    return false;
                }
            }
            else
            {
                timeCount+=arr[i];
            }
        }
        return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long s=0;
        long long e=accumulate(arr,arr+n,0ll);

        long long ans=-1;

        while(s<=e)
        {
            long long mid=s+(e-s)/2;
            if(isPossibleSolution(arr,n,k,mid))
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
};
