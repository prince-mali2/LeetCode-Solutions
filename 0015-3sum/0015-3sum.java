class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();

        Arrays.sort(nums);

        for(int i=0;i<nums.length-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int fix = nums[i];
            int j = i+1;
            int k = nums.length-1;

            while(j<k){
            int sum = nums[j]+nums[k];

                if(sum== (-fix)){
                List<Integer> temp = new ArrayList<>();
                temp.add(fix);
                temp.add(nums[j]);
                temp.add(nums[k]);

                ans.add(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum> (-fix)) k--;
                else j++;
               

            }

        }
        return ans;
    }
}