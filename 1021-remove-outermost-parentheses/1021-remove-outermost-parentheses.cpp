class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=0;

        for(int i=0;i<s.size();i++){
            if(count==0 && s[i]=='(')count++;
            else if(s[i]=='('){
                count++;
                ans.push_back(s[i]);
            }
            else if(s[i]==')' && count==1){
                count--;
            }
            else if(s[i]==')'){
                count--;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};