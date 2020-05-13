class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int maj = n/2;
        cout << maj << endl;
        
        unordered_map<int, int> mp;
        unordered_set<int> st;
        
        for (auto a : nums){
            mp[a]++;
            st.insert(a);
        }
        
        for (auto a : st){
            cout << a << endl;
            if (mp[a] > maj){
                return a;
            }
        }
        
        return -1;
    }
};