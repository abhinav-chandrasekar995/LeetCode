class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
       vector<int>areas;
       int rows = matrix.size();
       int cols = matrix[0].size();
       for (int i=0; i<rows; i++) {
        vector<int>histogram;
        for (int j=0; j<cols; j++) {
            int mover=i;
            int height=0;
            while(mover>=0 && matrix[mover][j]=='1') { 
                height++;
                mover--;
            }
            histogram.emplace_back(height);
        }
        largest_area(histogram,areas);
       }
       int ans=-1e9;
       for(int area: areas) {
        ans=max(ans,area);
       }
       return ans;
    }
    void largest_area(vector<int>& histogram,vector<int>& areas) {
        int n=histogram.size();
        vector<int>pse(n,-1), nse(n,n);
        stack<int>st;

        for(int i=0;i<n;i++) {
            while(!(st.empty()) && histogram[i]<=histogram[st.top()]) st.pop();
            pse[i] = st.empty() ? -1:st.top();
            st.push(i);
        }

        while(!(st.empty())) st.pop();

        for(int i=n-1; i>=0; i--) {
            while(!(st.empty()) && histogram[i]<=histogram[st.top()]) st.pop();
            nse[i] = st.empty() ? n:st.top();
            st.push(i);
        }

        for(int i=0; i<n; i++) {
            int width=nse[i]-pse[i]-1;
            int area = histogram[i]*width;
            int result=max(area,histogram[i]);
            areas.emplace_back(result);
        }
    }
};