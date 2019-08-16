class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         int n = nums.size();
        
        if (k < 0) 
        {
            return 0;
        }
        map<int, int> mp;
        int count = 0;
        
        for (int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        if (k != 0)
        {
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (mp.find(it->first + k) != mp.end())
                {
                    count++;
                }
            }
        }else
        {
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second > 1)
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};