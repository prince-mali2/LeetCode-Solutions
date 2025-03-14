class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1;
        int high = INT_MIN;
        int result = 0;
        for(int i:candies){
            high = max(high, i);
        }
    while(low<=high){
        int mid= (low+high)/2;
        long long count=0;
        for(int i: candies){
            count += (i/mid);
        }

        if(count>=k){
            result = mid;
         low = mid+1;}
        else high =mid-1;
        
    }
    return result;
    }
};