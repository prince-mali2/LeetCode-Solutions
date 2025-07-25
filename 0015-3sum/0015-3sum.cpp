class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        

        for(int i=0;i<n-2;i++){
             if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j=i+1;
            int k=n-1;

            while(j<k){

            int curr = nums[j]+nums[k];

            if(nums[i]+curr==0){

                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[k]);
                // sort(v.begin(), v.end());
               ans.insert(v);
                j++;
                k--;
            }else if(nums[i]+curr <0) j++;
            else k--;
            
            }

        }
        vector<vector<int>> sum(ans.begin(), ans.end());

        return sum;
    }
};