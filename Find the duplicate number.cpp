int findDuplicate(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                c=nums[i];
        }
        return c;
    }
