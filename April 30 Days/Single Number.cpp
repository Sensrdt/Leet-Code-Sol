class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        for(auto a : strs)
        {
            string s = a;
            
            sort(s, s+strs.size());
            
            ans.push_back(s);
        }
    }
};
