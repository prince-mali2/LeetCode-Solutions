class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int[] ans = new int[nums.length];

        int i = 0;
        int j = n-1;
        int k = n-1;

        while(i<=j){
            if(Math.pow(nums[i], 2) <= Math.pow(nums[j], 2)){
                ans[k] =(int) Math.pow(nums[j], 2);
                j--;
                k--;
            }
            else{
                ans[k] = (int) Math.pow(nums[i], 2);
                i++;
                k--;
            }
        }
        return ans;
    }
}