class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int ar=0;
        while(i<j){
            int l = min(height[i],height[j]);
            int b = j-i;

            int currarr = l*b;
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            ar = max(ar, currarr);
        }
        return ar;
    }
};