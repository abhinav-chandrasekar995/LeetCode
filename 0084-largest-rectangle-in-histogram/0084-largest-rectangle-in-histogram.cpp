class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> pse(n,-1);
        vector<int> nse(n,n);
        for(int i=0; i<n; i++) {
            if(st.empty()) {
                pse[i]=-1;
                st.push(i);
            }
            else {
                while(!(st.empty()) && heights[i]<=heights[st.top()]) st.pop();
                if(st.empty()) pse[i]=-1;
                else pse[i]=st.top();
                st.push(i);
            }
        }
        while(!(st.empty())) st.pop();
        for(int i=n-1; i>=0; i--) {
            if(st.empty()) {
                nse[i]=n;
                st.push(i);
            }
            else {
                while(!(st.empty()) && heights[i]<=heights[st.top()]) st.pop();
                if(st.empty()) nse[i]=n;
                else nse[i]=st.top();
                st.push(i);
             }
        }
        vector<int> areas;
        for(int i=0;i<n;i++) {
            long long intermediate=1LL*heights[i]*(nse[i]-pse[i]-1);
            areas.emplace_back(max((int)intermediate,heights[i]));
        }
        int ans=-1e9;
        for(int area: areas) ans=max(ans,area);
        return ans;
    }
};