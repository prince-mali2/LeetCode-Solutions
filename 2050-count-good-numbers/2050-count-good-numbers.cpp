class Solution {
public:
    const long long MOD = 1e9+7;
    long long power(long long base, long long exp){
        if(exp==0)return 1;
        long long half=power(base,exp/2);

        half = (half*half) %MOD;
        if(exp%2) half=(half*base)%MOD;
        return half;
    }

    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = (n/2);
        long long result = (power(5,even) * power(4,odd))% MOD;
        return (int)result;

    }
};