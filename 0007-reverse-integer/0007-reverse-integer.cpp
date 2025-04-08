class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while (x) { 
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            long lastdigit = x % 10; 
            rev = (rev * 10) + lastdigit; 
            x /= 10; 
        }
        return rev;
    }
};