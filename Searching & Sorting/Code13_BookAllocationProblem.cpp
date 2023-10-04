class Solution
{
    public:
    //Function to find minimum number of pages.

    bool isPossibleSolution(int A[],int N,int M,int sol)
    {
        int c=1;
        int pageSum=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]>sol)
            {
                return false;
            }

            if(pageSum+A[i]>sol)
            {
                c++;
                pageSum=A[i];
                if(c>M)
                {
                    return false;
                }
            }
            else
            {
                pageSum+=A[i];
            }
        }
        return true;
    }

    int findPages(int A[], int N, int M)
    {
        //code here
        if(M>N)
        {
            return -1;
        }

        int s=0;
        int e=accumulate(A,A+N,0);

        int ans=-1;

        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossibleSolution(A,N,M,mid))
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
