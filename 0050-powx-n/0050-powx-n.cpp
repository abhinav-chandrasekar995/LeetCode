class Solution {
public:
    double myPow(double x, int n) {
        if (n==1) return x;
        if(n==0 || x==1) return 1;
        long long N=n;
        if (N<0){
            x=1/x;
            N=-N;
        }
        double ans=calculation(x,N);
        return ans;
    }
    double calculation(double x, long long n){
        if (n==1) return x;
        if (n%2==0) return calculation(x*x,n/2);
        else return x*calculation(x,n-1);
    }
};