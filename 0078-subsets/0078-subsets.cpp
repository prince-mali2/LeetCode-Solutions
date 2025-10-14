class Solution {
public:
    void subset(int i,vector<vector<int>>&ans,vector<int> v, vector<int> nums){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }

        subset(i+1, ans, v, nums);
        v.push_back(nums[i]);
        subset(i+1, ans, v, nums);

    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;

        vector<int> v;

        subset(0,ans,v,nums);
        return ans;
    }
};