class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> ans(ratings.size(),1);
        int n = ratings.size();

        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
            
                    ans[i] = max(ans[i], ans[i-1]+1);
                
            }
            
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                
                    ans[i] = max(ans[i], ans[i+1]+1);
                
            }
        }

        int count=0;
        for(int i:ans)count+=i;

        return count;
    }
};