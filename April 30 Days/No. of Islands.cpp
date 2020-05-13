class Solution {
    void dfs(int x, int y, int r, int c, vector<vector<char>>& grid)
    {
        if (x<0 || x>= r || y<0 || y>=c || grid[x][y] != '1')
            return;
        
        grid[x][y] = '2';
        
        dfs(x, y+1, r, c, grid);
        dfs(x+1, y, r, c, grid);
        dfs(x, y-1, r, c, grid);
        dfs(x-1, y, r, c, grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int r = grid.size();
        
        int ans = 0;
            
        if (r == 0)
            return 0;
        
        int c = grid[0].size();
        
        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(i, j, r, c, grid);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
