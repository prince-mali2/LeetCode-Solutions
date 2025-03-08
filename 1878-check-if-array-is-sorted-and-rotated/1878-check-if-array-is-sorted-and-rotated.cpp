class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
    
    for(int i=1;i<=nums.size();i++){
        int arr[nums.size()];
        for(int j=0;j<nums.size();j++){
            arr[(j+i)%n] = nums[j];
        }
        int min= arr[0];
        int c=0;
        for(int k=1;k<n;k++){
            if(arr[k]>=min){
                c++;
                min=arr[k];
            }
            
        }
        if(c==(n-1)){
            return true;
        } 
    }
    return false;
    }
};