class Solution {
public:
    void combinations(vector<int>&v, vector<vector<int>>&ans,vector<int>& candidates,int target,int i ){
        if(target==0) {
            ans.push_back(v);
            return;
        }
        if(target<0 || i==candidates.size())return;
        


        v.push_back(candidates[i]);
        combinations(v,ans,candidates,target-candidates[i],i);
        v.pop_back();
        combinations(v,ans,candidates,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>> ans;
        combinations(v,ans,candidates,target,0);
        return ans;
    }
};