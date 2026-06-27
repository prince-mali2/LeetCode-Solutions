class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer, Integer> m1 = new HashMap<>();
        int []ans = new int[2];
        for(int i=0;i<nums.length; i++){
            m1.put(nums[i], i);
        }

        for(int i=0;i<nums.length; i++){
            int diff = target - nums[i];

            if(m1.containsKey(diff) && m1.get(diff)!=i){
                ans[0] = i;
                ans[1] = m1.get(diff);
                break;
            }
        }
        return ans;
    }
}