class NumArray
{
public:
    int dp[100];
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        dp[n + 1];

        for (int i = 0; i < n; i++)
        {
            dp[i + 1] = dp[i] + nums[i];
        }
    }

    int sumRange(int i, int j)
    {
        return dp[j + 1] - dp[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */