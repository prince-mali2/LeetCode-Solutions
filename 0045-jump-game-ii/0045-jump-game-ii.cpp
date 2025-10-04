class Solution {
public:
    int jump(vector<int>& nums) {
        
        int l=0;
        int r=0;
        int n=nums.size();
        int count=0;
        if(n==1)return 0;

       while(r<n-1){
        int farthest =0 ;

        for(int i=l; i<=r;i++){
            farthest = max(farthest, i+nums[i]);
        }
        l=r+1;
        r = farthest;

        count++;
       }
    return count;
    }
};