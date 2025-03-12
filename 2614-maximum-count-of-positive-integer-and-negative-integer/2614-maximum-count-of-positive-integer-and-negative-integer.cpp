class Solution {
public:
    int binary(vector<int>& nums, int target){
        int i=0;
        int j=nums.size()-1;
        int result = nums.size();

        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]<target){
                i = mid+1;
            }
            else{
                j=mid-1;
                result = mid;
            }

        }
            return result;
    }
    int maximumCount(vector<int>& nums) {
        int neg = binary(nums, 0);
        int pos =nums.size()- binary(nums,1);
        return max(neg,pos);
    }
};