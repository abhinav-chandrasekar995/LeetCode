class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int asteroid: asteroids) {
            if (asteroid==0) continue;
            else if(st.empty()) st.push(asteroid);
            else if((st.top()>0 && asteroid>0) || (st.top()<0 && asteroid<0) || (st.top()<0 && asteroid>0)) st.push(asteroid);
            else {
                if(abs(asteroid)<st.top()) continue;
                else if(abs(asteroid)==st.top()) {
                    st.pop();
                    continue;
                }
                else {
                    bool alive=true;
                    while(!(st.empty()) && (st.top()>0 && asteroid<0) && (abs(asteroid)>=st.top())) {
                    if(abs(asteroid)==st.top()) {
                        st.pop(); alive=false; break;
                    }
                    else st.pop();
                    }
                    if(!st.empty() && st.top()>0 && asteroid<0 && st.top() > abs(asteroid))
                    alive = false;
                if(alive==true) st.push(asteroid);
                }
            }
        } 
            vector<int>ans;
            while(!(st.empty())) {
                int ele=st.top();
                ans.emplace_back(ele);
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};