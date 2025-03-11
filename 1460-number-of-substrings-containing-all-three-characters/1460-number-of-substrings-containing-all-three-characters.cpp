class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        map<char,int> m;
        int i=0;
        int j=0;
        int count=0;
        while(j<n){
            m[s[j]]++;
            while(m.size()==3){
                count+= s.size()-j;
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                i++;
            } 
                j++;
            

        }

       
        return count;
    }
};