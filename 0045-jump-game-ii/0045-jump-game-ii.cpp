class Solution {
public:
    int jump(vector<int>& nums) {
        
        int l=0;
        int r=0;
        int n=nums.size();
        int count=0;
        if(n==1)return 0;

        for(int i=0;i<n-1;i++){
            r = max(r , i+nums[i]);

            if(i==l){
                count++;
                l=r;
            }
        }

    return count;
    }
};