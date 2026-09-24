class FrontMiddleBackQueue {
public:
deque<int>dq;
stack<int>st;
    FrontMiddleBackQueue() {

    }
    
    void pushFront(int val) {
        dq.push_front(val);
    }
    
    void pushMiddle(int val) {
        int n = dq.size();
        int middle = n/2;
        while(middle>0) {
            int ele = dq.front();
            st.push(ele);
            dq.pop_front();
            middle--;
        }
        dq.push_front(val);
        while(!(st.empty())) {
            int ele = st.top();
            dq.push_front(ele);
            st.pop();
        }
    }
    
    void pushBack(int val) {
        dq.push_back(val);
    }
    
    int popFront() {
        if(dq.empty()) return -1;
        int ans = dq.front();
        dq.pop_front();
        return ans;
    }
    
    int popMiddle() {
        int ans = -1;
        if(dq.empty()) return ans;
        double n = dq.size();
        int middle = ceil(n/2);
        while (middle > 0) {
            if (middle==1) {
                ans = dq.front();
                dq.pop_front();
            }
            else {
                int ele = dq.front();
                st.push(ele);
                dq.pop_front();
            }
            middle--;
        }
        while(!(st.empty())) {
            int ele = st.top();
            dq.push_front(ele);
            st.pop();
        }
        return ans;
    }
    
    int popBack() {
        if(dq.empty()) return -1;
        int ans = dq.back();
        dq.pop_back();
        return ans;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */