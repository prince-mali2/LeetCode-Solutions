class Solution {
public:
    int maxSum(vector<int>& nums) {
        
        set<int> s;
        bool haspos = false;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(nums[i]>0) haspos=true;
            s.insert(nums[i]);
        }
        int sum=0;

        for(auto i:s){
            // intq curr = sum+i;
            sum = max(sum, sum+i);
        }
        if(haspos)return sum;
        return *max_element(s.begin(),s.end());
    }
};