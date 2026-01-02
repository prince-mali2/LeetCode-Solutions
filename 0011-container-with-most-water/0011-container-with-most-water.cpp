class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int area =0;

        while(i<j){
            
            int length = min(height[i], height[j]);
            int breadth = j-i;
            int currarea = length*breadth;
            area = max(area, currarea);
            
            if(height[i]<height[j])i++;
            else j--;

        }

        return area;
    }
};