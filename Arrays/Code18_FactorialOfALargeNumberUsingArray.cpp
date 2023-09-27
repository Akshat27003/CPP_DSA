class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        ans.push_back(1); //for 0 and 1 factorial
        int carry=0;

        for(int i=2;i<=N;i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                int x=ans[j]*i+carry;
                ans[j]=x%10; //updating values at already pushed index value
                carry=x/10; //updating carry.
            }
            //for pushing carry greater than 10.
            while(carry)
            {
                ans.push_back(carry%10);
                carry=carry/10;
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};
