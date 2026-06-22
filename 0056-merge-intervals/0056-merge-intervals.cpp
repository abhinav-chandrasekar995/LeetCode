class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>answer;
        int n=intervals.size();
        int k=0;
        sort(intervals.begin(),intervals.end());
        answer.emplace_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=answer[k][1])
            {
                if(intervals[i][1]>answer[k][1])
                {
                    answer[k][1]=intervals[i][1];
                }
                else
                continue;
            }
            else
            {
                answer.emplace_back(intervals[i]);
                k++;
            }
        }
        return answer;
    }
};