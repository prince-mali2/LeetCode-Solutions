class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int pend = 0;
        int count=0;
        for(auto v : meetings){
            int s = max(v[0], pend+1);
            int length = v[1]-s+1;
            days -= max(length , 0);
            pend = max(pend, v[1]);
        } 
        return days;
    }
};