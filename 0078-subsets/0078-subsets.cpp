class Solution {
public:
    void rec(int i, vector<int> &nums, vector<int> subsets, vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(subsets);
            return;
        }

        // not take the element
        rec(i+1, nums, subsets, ans);

        //take the element
        subsets.push_back(nums[i]);
        rec(i+1, nums,subsets,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> subsets;
        vector<vector<int>> ans;
        rec(0, nums, subsets, ans);
        return ans;
    }
};