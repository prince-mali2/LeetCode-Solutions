class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2)return false;

        for(int i=0;i<n1;i++){
            if(m1.count(s[i]) && m1[s[i]]!=t[i])return false;
            if(m2.count(t[i]) && m2[t[i]]!=s[i])return false;
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
        }
        return true;
    }
};