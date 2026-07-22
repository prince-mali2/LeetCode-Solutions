class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int ans =0;
        int [] maxL = new int[n];
        int [] maxR = new int[n];
        int left=height[0];
        int right=height[n-1];

        for(int i=0;i<n;i++){
            // puting in left prefix array
            if(height[i]>left){
                left = height[i];
            }
            maxL[i] = left;

            //putting in right suffix array

            if(height[n-i-1] > right){
                right = height[n-i-1];
            }
            maxR[n-i-1]= right;
        }


        for(int i=0;i<n;i++){
            int length = Math.min(maxL[i] , maxR[i]);
            int store = length - height[i];

            ans += store;
        }



        return ans;
    }
}