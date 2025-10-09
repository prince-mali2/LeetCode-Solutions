class Solution {
public:
    double calpow(double x, long n) {
        if(n==0) return 1.0;
        if(n==1) return x;

        if(n%2==0){
            return calpow(x*x, n/2);
        }
        else{
             return calpow(x,n-1)*x;
        }
    }

    double myPow(double x, int n){
        if(n>=0){
            return calpow(x ,long(n));
        }
        else{
            x=1.0/x;
            long m =n;
            m=-1*m;
            return calpow(x,m);
        }
    }
};