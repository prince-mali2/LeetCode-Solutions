class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];

        // int i=0;
        int j=1;
        int mp=nums[0];
        int maxp=nums[0];
        int minp=nums[0];


        while(j< n){
            if(nums[j]<0) swap(maxp,minp);
            maxp = max(nums[j], maxp*nums[j]);
            minp = min(nums[j], minp*nums[j]);

            mp = max(mp, maxp);
            j++;
        }
        return mp;
    }
};