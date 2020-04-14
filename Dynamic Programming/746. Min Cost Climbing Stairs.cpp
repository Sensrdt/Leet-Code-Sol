class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();

        // 1 step or 2 step

        if (n == 0 || n == 1)
            return 0;
        if (n == 2)
            return min(cost[0], cost[1]);

        /*
            cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
            0 -> 2 -> 3 -> 4 -> 6-> 7 -> TOP
            1 + 1 + 1 + 1 + 1 + 1 = 6
        */
        int dp[n + 1];
        dp[0] = 0, dp[1] = 0, dp[2] = min(cost[1], cost[0]);
        for (int i = 3; i <= n; i++)
        {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }

        return dp[n];
    }
};