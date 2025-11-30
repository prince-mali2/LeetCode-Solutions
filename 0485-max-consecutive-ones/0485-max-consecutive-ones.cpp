class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int maxi=0;
        while(j<nums.size()){
            if(nums[j]==0){
                i=j+1;
            }else{
            maxi=max(maxi,j-i+1);
            }
            j++;
        }
        return maxi;
    }
};