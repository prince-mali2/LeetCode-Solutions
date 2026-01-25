class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)return INT_MAX;
        bool sign =true;
        if(dividend>=0 && divisor<0) sign=false;
        if(dividend<0 && divisor>0) sign=false;
        if(dividend==divisor) return 1;

        long long ans=0;

        long long a = llabs(dividend);
        long long b = llabs(divisor);

        while(a>=b){
            int cnt=0;
            while(b<<(cnt+1) <= a) cnt++;

            ans+=(1<<cnt);
            a-= b<<(cnt);
        }
        if(!sign)ans=-ans;
    return (int)ans;
    }
};