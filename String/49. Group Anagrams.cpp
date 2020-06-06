class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        
        map<string, vector<string>> m;
        
        for (string s : str)
        {
            string s1 = s;
            sort(s1.begin(), s1.end());
            m[s1].push_back(s);
        }
        
        vector<vector<string>> v;
        for (auto pp : m)
        {  
            v.push_back(pp.second);
            
        }
        return v;
    }
};