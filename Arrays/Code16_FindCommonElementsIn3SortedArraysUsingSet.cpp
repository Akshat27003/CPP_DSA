class Solution
{
    public:
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here. 3 pointer and set ds
            int i=0;
            int j=0;
            int k=0;
            set<int> st;
            vector<int> ans;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    st.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
            }

            for(auto i : st)
            {
                ans.push_back(i);
            }
            return ans;
        }

};
