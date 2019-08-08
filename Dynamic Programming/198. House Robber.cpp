class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int pp, p, c;
        pp = p = c = 0;
        for (int i=0; i<n; i++){
            c = p;
            c = max(c, nums[i] + pp);
            pp = p;
            p = c;
        }

        return c;
    }
};
//https://leetcode.com/problems/house-robber/