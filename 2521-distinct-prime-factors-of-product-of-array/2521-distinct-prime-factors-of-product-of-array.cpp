class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>store;
        for(int num: nums) {
            soe(num, store);
        }
        return store.size();
    }
    void soe(int num, set<int>& store) {
        vector<int>verdict(num+1,1);
        verdict[0]=0;
        verdict[1]=0;
        int x=(int)sqrt(num+1);
        for(int i=2;i<=x;i++) {
            if(verdict[i]==1) {
                for(int j=i*i;j<(num+1);j+=i) {
                    verdict[j]=0;
                }
            }
        }
        for(int i=2;i<(num+1);i++) {
            if(verdict[i]==1 && num%i==0) store.insert(i);
        }
    }
};