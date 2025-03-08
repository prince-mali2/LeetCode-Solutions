class Solution {
public:
    long long minhour(vector<int>& piles, int mid){
        long long total =0;
        for(int i=0;i<piles.size();i++){
            total+=ceil(double(piles[i])/double(mid));
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi =INT_MIN;
        int ans=0;
        for(int i:piles){
            maxi = max(maxi,i);
        }
       int i=1;
       int j=maxi;
       
       while(i<=j){
         int mid = i + (j - i) / 2;
        long long mini = minhour(piles,mid);
        if(mini<=h){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
       }
    return ans;

    }
};