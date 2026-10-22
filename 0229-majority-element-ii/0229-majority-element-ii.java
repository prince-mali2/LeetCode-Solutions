class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int m1 =0;
        int m2 = 0;
        int n = nums.length;
        int times = n/3;

        int c1=0;
        int c2=0;
        List<Integer> l = new ArrayList<>();

        for(int i=0;i<nums.length;i++){
            if(c1==0 && nums[i] != m2)m1 = nums[i];
            else if(nums[i] != m1 && c2==0)m2=nums[i];

            if(nums[i]==m1)c1++;
            else if(nums[i] == m2) c2++;
            else{
                c1--;
                c2--;
           
            }

        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==m1)count1++;
            if(nums[i]==m2)count2++;

        }
        if(count1>times)l.add(m1);
        if(m1!=m2 && count2>times)l.add(m2);

        return l;
    }
}