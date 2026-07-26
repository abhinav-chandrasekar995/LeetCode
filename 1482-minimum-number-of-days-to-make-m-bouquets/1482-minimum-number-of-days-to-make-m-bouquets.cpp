class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(m > n/k) return -1;
        int minimum=1e9,maximum=-1e9;
        for(int i=0;i<n;i++){
            minimum=min(bloomDay[i],minimum);
            maximum=max(bloomDay[i],maximum);
        }
        int ans=1e9;
        int low=minimum,high=maximum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=0;
            long long bouquets=0;
            
            for(int flower: bloomDay){
                if(mid>=flower){
                    count++;
                }
                else count=0;
                if(count==k){
                    bouquets += 1;
                    count=0;
                }
            }
            if(bouquets>=m){
                ans=min(ans,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
            return ans;
    }
};