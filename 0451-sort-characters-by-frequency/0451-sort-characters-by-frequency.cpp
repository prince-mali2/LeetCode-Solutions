class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;

        for(char i :s) m[i]++;
        int n=s.size();

        vector<vector<char>> bucket(n+1);

        for(auto i : m){
            bucket[i.second].push_back(i.first);
        }

        string result;
        for(int i=s.size();i>0;i--){
            for(char c:bucket[i]){
                result.append(i,c);
            }
        }
        return result;
    }
};