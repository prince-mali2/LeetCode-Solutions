class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> m;

        int n = nums.size();
        for(int i:nums){
            m[i]++;
        }

        for(auto i : m){
            if(i.second%2!=0){
                return false;
            }
        }
        return true;
    }
};