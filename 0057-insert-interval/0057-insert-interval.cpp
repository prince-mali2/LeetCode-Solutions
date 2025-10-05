class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;

        int i=0;
        int n = intervals.size();

        //Left most section which doesn't overlap

        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        //Section which will overlap
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        ans.push_back(newInterval);

        //right section which doesn't overlap

        while(i<n && newInterval[1]<intervals[i][0]){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};