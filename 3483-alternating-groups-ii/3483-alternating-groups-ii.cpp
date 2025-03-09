class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for(int i=0;i<k-1;i++){
            colors.push_back(colors[i]);
        }
        int n = colors.size();
        int i=0;
        int j=i+1;
        int count=0;

        while(j<n){
            if(colors[j]==colors[j-1]){
                i=j;
            
            }

            if((j-i+1) >= k)count++;
            j++;
        }
        return count;
    }
};