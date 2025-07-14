class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        vector<int> prefix(n);
        vector<int> suffix(n);
        int p =1;
        int s=1;
        for(int i=0;i<n;i++){
            p*=nums[i];
            prefix[i]=p;
        }

        for(int i=n-1;i>=0;i--){
            s*=nums[i];
            suffix[i]=s;
        }
        for(int i=0;i<n;i++){
            if(i==0) ans.push_back(suffix[i+1]);
            else if(i==n-1) ans.push_back(prefix[i-1]);
            else ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        return ans;
    }
};