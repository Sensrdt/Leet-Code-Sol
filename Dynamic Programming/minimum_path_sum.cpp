ass Solution {
	public:
		    int minPathSum(vector<vector<int>>& grid) {
			            
			            const int INF  = 1e9 + 5;
				            
				            int n = grid.size();
					            int m = grid[0].size();
						            
						            vector<vector<int>> dp(n, vector<int>(m));
							            
							            for (int i=0; i<n; i++)
									            {
											                for (int j=0; j<m; j++)
														            {
																                    if (i == 0 && j == 0)
																			                        dp[i][j] = grid[i][j];
																		                    else
																					                        dp[i][j] = grid[i][j] + min((i == 0 ? INF : dp[i-1][j]), (j == 0 ? INF : dp[i][j-1]));
																				                }
													        }
								            
								            return dp[n-1][m-1];
									        }
};
