class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int c=0;
        int start=0;
        for(int  num: nums){
            if(c==0){
                start=num;
            }

            if(start==num){
                c++;
            }else{
                c--;
            }
        }
        return start;
    }
}