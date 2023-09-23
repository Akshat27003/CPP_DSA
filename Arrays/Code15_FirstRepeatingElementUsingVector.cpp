class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int maxi=INT_MIN;
        //mapping each element withs its number of occurences.
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }

        vector<int> hash(maxi+1,0);
        //implementing hashing using vector.
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }

        //if a particular key element repeats, its value will be > 1 in corresponding to it.
        //return the index to the key.
        for(int i=0;i<n;i++)
        {
            if(hash[arr[i]]>1)
            {
                return (i+1);
            }
        }
        return -1;
    }
};
