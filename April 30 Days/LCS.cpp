class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        /*
            * a b c
            * d b c
              
               0 1 2 3 4
               a b c d e
          0   
          1  b
          2  c
          
        */
        int n = text1.length();
        int m = text2.length();
        
        int dp[n+1][m+1];
        
        for (int i=0; i<=n; i++)
        {
            for (int j=0; j<=m; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (text1[i-1] != text2[j-1])
                {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }else{
                    dp[i][j] = dp[i-1][j-1] + 1;
                }

            }
        }
        
        return dp[n][m];
    }
};
