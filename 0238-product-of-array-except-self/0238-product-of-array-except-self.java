class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] prefix = new int[nums.length];
        int[] suffix = new int[nums.length];

        int[] ans = new int[nums.length];

        int prod1=1;
        int prod2=1;

        for(int i=0;i < nums.length; i++){
            prod1 *= nums[i];
            prefix[i] = prod1;

            prod2 *= nums[nums.length-1-i];
            suffix[nums.length-1-i] = prod2;

        }

        for(int i=0;i<nums.length;i++){
            if(i==0) ans[i] = suffix[i+1];
            else if(i==nums.length-1) ans[i] = prefix[i-1];
            else{
                ans[i] = prefix[i-1]*suffix[i+1];
            }
        }

        return ans;
    }
}

// 1, 2, 3, 4
// 1, 2, 6, 12 // prefix
// 24, 24, 12, 4 //suffix







