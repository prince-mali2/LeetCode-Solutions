class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
       vector<int> v;
       int count=0;
       for(auto i : grid){
        for(auto j : i){
            v.push_back(j);
        }
       } 
       sort(v.begin(), v.end());
        int n = v.size();
       int mid = n/2;

       for(int i=0;i<n;i++){
        if(abs(v[i] - v[mid])%x !=0) return -1;
        
        count += abs(v[i] - v[mid])/x;

       }
       return count;
    }
};