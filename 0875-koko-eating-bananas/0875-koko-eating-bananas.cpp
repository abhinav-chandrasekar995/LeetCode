class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxpiles=-1e9;
        for (int i=0;i<n;i++){
            maxpiles=max(maxpiles,piles[i]);
        }
        int low=1;
        int high=maxpiles;
        int ans=1e9;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int pile: piles){
                hours += ceil(double(pile)/mid);
            }
            if(hours<=h)
            {
                ans=min(mid,ans);
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};