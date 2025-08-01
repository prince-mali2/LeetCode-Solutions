class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        

        for(int i=0;i<n-2;i++){
             if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j=i+1;
            int k=n-1;

            while(j<k){

            int sum = nums[j]+nums[k]+nums[i];

            if(sum==0){

                ans.push_back({nums[i],nums[j],nums[k]});

                while (j<k  && nums[k] == nums[k - 1]) k--;
                while (j<k && nums[j] == nums[j + 1]) j++;
                j++;
                k--;
            }else if(sum <0) 
            j++;
            else k--;
            }

        }

        return ans;
    }
};