class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        int n = strs.size();
        
        unordered_map<string, vector<string>> mp;
        
        for (auto a : strs){
            
            string s = a;
            
            sort(a.begin(), a.end());
            
            mp[a].push_back(s);
        }
        
        for (auto a : mp){
            ans.push_back(a.second);
        }
        
        return ans;
    }
};
