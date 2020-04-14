class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        bool down = false;
        int r = 0;
        vector<string> ans(min(numRows, int(n)));
        
        if (numRows == 1)
        {
            return s;
        }        
        for (char c : s)
        {
            ans[r] += c;
            
            if (r == 0) down = true;
            else if (r == numRows-1) down = false;
            r += down ? 1 : -1; 
        }
        
        string res;
        for (string a : ans)
        {
            res += a;
        }
        
        return res;
    }
};