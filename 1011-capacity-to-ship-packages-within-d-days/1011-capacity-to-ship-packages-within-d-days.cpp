class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=1e9;
        int low=-1e9;
        int high=0;
        for(int weight: weights){
            low=max(low,weight); //not min since a parcel to be carried-low should be the heaviest parcel since it cannot be broken
            high+=weight;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            long long duration=1;
            long long runningsum=0;
            for(int weight: weights){
                if((runningsum+weight)<=mid){
                    runningsum+=weight;
                }
                else{
                    duration++;
                    runningsum=weight;
                }
            }
            if(duration<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};