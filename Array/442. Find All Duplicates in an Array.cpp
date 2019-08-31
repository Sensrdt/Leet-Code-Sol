class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        vector<int> a;
        for (int i=0; i<n; i++)
        {
            if (mp[nums[i]] == 0)
            {
                mp[nums[i]]++;
            }else{
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};