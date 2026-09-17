class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = -1e9;
        int sum = 0;
        for(int i=0; i<k; i++) {
            sum += cardPoints[i];
            ans = max (ans,sum);
        }
        int end = n-1;
        for (int i = k-1; i>=0; i--) {
            sum -= cardPoints[i];
            sum += cardPoints[end];
            end--;
            ans = max(ans,sum);
        }
        return ans;
    }
};