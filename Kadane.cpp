 long long maxSubarraySum(vector<int> &arr) {
        // code here..
        int c=arr[0];
        int m=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            c=max(arr[i],arr[i]+c);
            m=max(c,m);
        }
        return m;
    }
//Another way I have to try later
