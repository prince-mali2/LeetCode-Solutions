class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> distinct(nums.begin(),nums.end());

        int t = distinct.size();
        int count = 0;
        int size = nums.size();

        for(int i=0;i<size;i++){
            unordered_set<int> s;
            for(int j=i;j<size;j++){
                s.insert(nums[j]);
                if(s.size()==t) count++;
            }
        }
        return count;
    }
};