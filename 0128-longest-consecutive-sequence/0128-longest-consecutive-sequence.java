class Solution {
    public int longestConsecutive(int[] nums) {
        
        HashSet<Integer> s = new HashSet<Integer>();

        for(int i=0;i<nums.length;i++){
            s.add(nums[i]);
        }
        int length=0;
        
        int start=-1;
        for(int i : s){
            if(!s.contains(i-1)){
                start = i;
                int count=1;

                while(s.contains(i+1)){
                    count++;
                    i++;
                }


                length  = Math.max(length, count);


            }
        }

        return length;
    }
}