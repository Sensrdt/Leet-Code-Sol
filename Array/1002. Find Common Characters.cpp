class Solution
{
public:
    vector<string> commonChars(vector<string> &A)
    {
        int n = A.size();
        int map[n][26] = {0};
        vector<string> common;
        for (int i = 0; i < n; i++)
        {
            for (auto x : A[i])
            {
                map[i][x - 'a']++;
            }
        }

        for (char c = 0; c < 26; c++)
        {
            int max = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (max > map[i][c])
                {
                    max = map[i][c];
                }
            }

            for (int idx = 0; idx < max; ++idx)
            {
                common.push_back(string(1, c + 'a'));
            }
        }
        return common;
    }
};