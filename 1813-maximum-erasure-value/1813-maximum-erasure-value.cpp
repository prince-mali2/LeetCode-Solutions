class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int i=0;
        int j=0;
        int maxsum=0;
        int sum=0;
        while(j<n){
            if(mp.find(nums[j]) == mp.end() || mp[nums[j]]==0){
                mp[nums[j]]++;
                sum+=nums[j];
                maxsum = max(sum,maxsum);
            }
            else{
                while(nums[i]!=nums[j]){
                    mp[nums[i]]--;
                    sum-=nums[i];
                    i++;
                // sum+=nums[j];

                }
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
                mp[nums[j]]++;

                sum+=nums[j];

            }
            j++;
        }
        return maxsum;
    }
};