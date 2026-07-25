class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        ArrayList<Integer> ans= new ArrayList<>();
        Deque<Integer> dq = new LinkedList<>();
        int i=0;
        int j=0;



        while(j<nums.length){

            
            while(!dq.isEmpty() && nums[dq.peekLast()] < nums[j]){
                dq.pollLast();
            }
            dq.offerLast(j);

            if(j-i+1 == k){

                ans.add(nums[dq.getFirst()]);
                if(nums[dq.getFirst()] == nums[i]) dq.pollFirst();
                i++;

            }
            j++;
        }

        int[] result = new int[ans.size()];

        for (int l = 0; l < ans.size(); l++) {
            result[l] = ans.get(l);
        }


        return result;
    }
}