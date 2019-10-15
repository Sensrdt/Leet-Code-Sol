class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();

        unordered_set<char> set;

        int i = 0, j = 0;
        int ans = 0;

        while (i < n && j < n)
        {
            if (set.find(s[j]) == set.end())
            {
                set.insert(s[j++]);
                ans = max(ans, j - i);
            }
            else
            {
                set.erase(s[i++]);
            }
        }

        return ans;
    }
};