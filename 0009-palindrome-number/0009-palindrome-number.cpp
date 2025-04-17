class Solution {
public:
    bool isPalindrome(int x) {
      int dup=x;
      long rev=0;
     while(x>0){
        long z =x%10;
        rev = (rev * 10) + z;
        x /= 10;
     }
     return dup == rev;

    }
};