class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size(), m = arr2.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr1[i]]++;
        }
        int j = 0;
        for (int i = 0; i < m; i++)
        {
            int x = arr2[i];
            while (mp[x] > 0)
            {
                arr1[j] = x;
                j++;
                mp[x]--;
            }
        }

        // If there is any extra element i arr1 which is not present in arr2
        if (j < arr1.size() - 1)
        {
            for (int i = 0; i < 1001; i++)
            {
                while (mp[i] > 0)
                {
                    mp[i]--;
                    arr1[j] = i;
                    j++;
                }
            }
        }

        return arr1;
    }
};