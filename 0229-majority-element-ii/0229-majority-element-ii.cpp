class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int time = size/3;
        unordered_map<int,int> mp;

        for(int i=0;i<size;i++){
            mp[nums[i]]++;
        }

       
        for(auto i : mp){
            if(i.second>time) ans.push_back(i.first);
        }
        return ans;
    }
};