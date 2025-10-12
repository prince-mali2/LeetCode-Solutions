class Solution {
public:
    void generate(vector<string> &ans,string &s,int open, int close,int count,int &n){
        if(n==open && n==close ){
            ans.push_back(s);
            return;
        } 

        if(open<=n){
            s.push_back('(');
            generate(ans,s,open+1,close,count,n);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            generate(ans,s,open,close+1,count,n);
            s.pop_back();
        }


    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";

        generate(ans,s,0,0,0,n);
        return ans;

    }
};