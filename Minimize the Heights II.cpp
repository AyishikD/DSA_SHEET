int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int m=arr[n-1]-arr[0];
        int c,d;
        for(int i=1;i<n;i++){
            c=min(arr[i]-k,arr[0]+k);
            d=max(arr[i-1]+k,arr[n-1]-k);
            if(c<0)
                continue;
            m=min(m,d-c);
        }
        return m;
    }
// Good one I encountered vvip
