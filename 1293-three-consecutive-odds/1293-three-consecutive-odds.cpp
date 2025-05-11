class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0;
        int j=0;
        int n=arr.size();
        int count=0;

        while(j<n){
            if(arr[j]%2==0){
                i=j+1;
            }
            if(j-i+1==3) return true;
            j++;
        }
        return false;
    }
};