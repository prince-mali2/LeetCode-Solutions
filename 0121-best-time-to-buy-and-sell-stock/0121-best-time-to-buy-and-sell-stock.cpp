class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int buy = INT_MAX;
        int sell = 0;

        for(int i=0;i<n;i++){
            if(nums[i]<buy){
                buy = nums[i];
            }
            else sell = max(sell , nums[i]-buy);
        }

        return sell;

    }
};