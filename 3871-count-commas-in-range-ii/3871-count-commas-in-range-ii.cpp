class Solution {
public:
    long long countCommas(long long n) {
        if (n<1e3) return 0;
        else if (n>=1e3 && n<1e6) return (n-999);
        else if (n>=1e6 && n<1e9) return (999000 + 2*(n-999999));
        else if (n>=1e9 && n<1e12) return (999000 + 2*999000000 + 3*(n-999999999));
        else if (n>=1e12 && n<1e15) return (999000 + 2*999000000 + 3*999000000000 + 4*(n-999999999999));
        else return (999000 + 2*999000000 + 3*999000000000 + 4*999000000000000 + 5);
    }
};