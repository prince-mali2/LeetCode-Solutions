class Solution {
    public void swap(int[] nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    public void sortColors(int[] nums) {
        int i = 0;
        int j = nums.length-1;
        int k = 0;

        // for(int k=0;k<nums.length;k++){
        //   if(k>j) return;
        //     if(nums[k] == 0) swap(nums, k, i++);
        //     else if(nums[k] == 2)swap(nums,k, j--);
        // }
        
        while(k<=j){
            if(nums[k]==0){
             swap(nums, i, k);
             i++;
             k++;
        }
        else if(nums[k] ==2){
            swap(nums,j,k);
            j--;
            
        }
        else {
            k++;
        }
    }
    }
}