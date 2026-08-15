class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>answer;
        stack<int>s;

        int end=temperatures.size()-1;

        for(int i=end;i>=0;i--) {
            if (s.empty()) {
                answer.emplace_back(0);
            }
            else if (temperatures[s.top()]<=temperatures[i]) {
                while (!(s.empty()) && temperatures[s.top()]<=temperatures[i]) {
                    s.pop();
                }
                if (s.empty()) answer.emplace_back(0);
                else answer.emplace_back(s.top()-i);
            }
            else answer.emplace_back(1);

            s.push(i);
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};