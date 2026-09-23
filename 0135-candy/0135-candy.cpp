class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        long long ans = 0;
        vector <int> candy1 (n,1);
        for(int i = 1; i < n; i++) {
            if(ratings[i] > ratings[i-1]) {
                candy1[i] = candy1[i-1] + 1;
            }
        }

        vector <int> candy2 (n,1);
        ans += max (candy1[n-1],candy2[n-1]);

        for(int i = n-2; i >= 0; i--) {
            if(ratings[i] > ratings[i+1]) {
                candy2[i] = candy2[i+1] + 1;
            }
            ans += max (candy1[i],candy2[i]);
        }
        return ans;
    }
};