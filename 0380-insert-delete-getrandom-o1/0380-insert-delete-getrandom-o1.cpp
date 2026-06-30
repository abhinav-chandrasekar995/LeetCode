class RandomizedSet {
public:
        vector<int>nums;
        unordered_map<int,int>umpp;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(umpp.find(val)==umpp.end())
        {
            nums.emplace_back(val);
            umpp[val]=nums.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(umpp.find(val)==umpp.end())
        {
            return false;
        }
        int pos=umpp[val];
        umpp[nums[nums.size()-1]]=pos;
        swap(nums[pos],nums[nums.size()-1]);
        nums.pop_back();
        umpp.erase(val);
        return true;
    }
    
    int getRandom() {
        int pos= rand() % nums.size();
        return nums[pos];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */