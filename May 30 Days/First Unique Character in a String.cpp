class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char, int> mp;
        
        int n = s.length();
        
        for ( auto c : s )
        {
            mp[c]++;
        }
        
        for (int x = 0; x < n; x++)
        {
            if (mp[s[x]] < 2)
            {
                return x;
            }
        }
        return -1;
        
    }
};