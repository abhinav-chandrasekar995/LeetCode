class Solution {
public:
    int mod=1e9+7;
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=(n+1)/2;
        return (good(5,even)*good(4,odd))%mod;
    }
    long long good(long long n, long long i) {
       if (i == 0) return 1;
       long long half = good (n,i/2);
       if(i%2 == 0) return (half*half)%mod;
       else return (n*half*half)%mod;
    }
};