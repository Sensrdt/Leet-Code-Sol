class FirstUnique {
public:
    
    unordered_map<int, int> mp;
    queue<int> q;
    
    
    FirstUnique(vector<int>& nums) {
        for (auto a : nums){
            add(a);
        }    
    }
    
    int showFirstUnique() {
        while(!q.empty() && mp[q.front()] >= 2){
            q.pop();
        }
        
        if (q.empty())
            return -1;
        
        return q.front();
    }
    
    void add(int value) {
        
        mp[value]++;
        q.push(value);
        
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
