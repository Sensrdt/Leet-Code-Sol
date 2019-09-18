class Solution
{
public:
#include <bits/stdc++.h>
    int firstUniqChar(string s)
    {

        map<char, int> mp;

        int n = s.length();

        for (auto c : s)
        {
            mp[c]++;
        }

        for (int x = 0; x < n; x++)
        {
            if (mp[s[x]] < 2)
            {
                return x;
                break;
            }
        }
        return -1;
    }
};