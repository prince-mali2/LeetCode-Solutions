class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(i==n-1)return true;
            maxjump = max(maxjump, i+nums[i]);
            if(nums[i]==0 && maxjump<=i)return false;
        }
        return true;
    }
};