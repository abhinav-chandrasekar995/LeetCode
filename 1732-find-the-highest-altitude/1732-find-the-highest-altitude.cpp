class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int runningsum=0;
        int altitude=0;
        for(int i=0;i<gain.size();i++)
        {
            runningsum+=gain[i];
            altitude=max(altitude,runningsum);
        }
        return altitude;
    }
};