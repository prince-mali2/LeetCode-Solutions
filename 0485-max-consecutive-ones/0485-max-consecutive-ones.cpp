class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int i=0,j=0;
        int ans=0;
        

        while(j<nums.size()){
            if(nums[j]==1){
                cnt++;
                ans = max(ans, cnt);
            }
            else{
                cnt=0;
                i=j+1;
            }
            j++;
        }
        return ans;
    }
};