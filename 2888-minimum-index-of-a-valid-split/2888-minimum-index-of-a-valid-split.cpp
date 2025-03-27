class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        map<int,int>m;
        int dom = 0;
        int count=0;

        for(int i: nums){
            m[i]++;
        }
        for(auto[i,c] : m){
            if(c>n/2){
                dom = i;
                count=c;
                break;
            }
        }
        int leftsize=0;
        int rightsize=0;
        int lcount=0;
        int rcount=0;


        for(int i=0;i<n;i++){
            if(nums[i]==dom) lcount++;
            leftsize = i+1;
            rightsize = n-leftsize;
            rcount = count-lcount;

            if(lcount > leftsize/2 && rcount > rightsize/2) return i;
        }

        return -1;
    }
};