class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count=0;

        int n1 = g.size();
        int n2 = s.size();

        int i = n1-1;
        int j = n2-1;

        while(i>=0 && j>=0){
            if(g[i]<=s[j]){
                count++;
                i--;
                j--;
            }else{
                i--;
            }

        }
        return count;
    }
};