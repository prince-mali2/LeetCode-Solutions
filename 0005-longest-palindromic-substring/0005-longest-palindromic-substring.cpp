class Solution {
public:
    void find_Palindrome(int left, int right , int &max_length, int &start,string &s, int n){
        while(left>=0 && right<n &&s[left]==s[right]){

            if(right-left+1>max_length){
            max_length = right-left+1;
            start = left;
            }

            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        int max_length=1;
        int start = 0 ;
        int n = s.size();

        for(int i=0;i<s.size();i++){
            find_Palindrome(i,i+1, max_length,start,s,n);
            find_Palindrome(i,i, max_length, start,s,n);
        }

        return s.substr(start , max_length);
    }
};