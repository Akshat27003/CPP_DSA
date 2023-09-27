

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
        string ans;

        int i=n-1;
        int j=m-1;
        int carry=0;
        //both array have elements
        while(i>=0 && j>=0)
        {
            int x=a[i]+b[j]+carry;
            int digit=x%10;
            ans.push_back(digit+'0');
            carry=x/10;
            i--;
            j--;
        }

        //array a has elements left.
        while(i>=0)
        {
            int x=a[i]+carry;
            int digit=x%10;
            ans.push_back(digit+'0');
            carry=x/10;
            i--;
        }

        //array b has elements left.
        while(j>=0)
        {
            int x=b[j]+carry;
            int digit=x%10;
            ans.push_back(digit+'0');
            carry=x/10;
            j--;
        }

        if(carry)
        {
            ans.push_back(carry+'0');
        }

        //removing all unnecessary zeros from the end.
        while(ans[ans.size()-1]=='0')
        {
            ans.pop_back();
        }

        //reversing to get the desired answer.
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
