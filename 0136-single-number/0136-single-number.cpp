class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i==0 && nums[i]!=nums[i+1]) return nums[i];
            else if(i>0 && i<n &&nums[i]!=nums[i-1] && nums[i]!=nums[i+1])return nums[i];
            else if(i==n-1 && nums[i]!=nums[i-1]) return nums[i];


 
        }
        return -1;
    }
};