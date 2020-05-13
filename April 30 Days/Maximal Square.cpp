class Solution {
public:
    int maximalSquare(vector<vector<char>>& a) {
        
        int h = a.size();
        
        if (h == 0 || a[0].empty()){
            return 0;
        }
       
        int w = a[0].size();
        
        int ans = 0;
        
        vector<vector<int>> dp(h, vector<int> (w, 0));
            
        for (int i=0; i<h; i++){
            for (int j=0; j<w; j++){
                if (a[i][j] == '1'){
                    dp[i][j] = 1;
                    if (i > 0 && j > 0){
                        dp[i][j] += min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});   
                    }
                        ans = max(ans, dp[i][j]);
                }
            }
        }
        
        return ans*ans;
    }
};
