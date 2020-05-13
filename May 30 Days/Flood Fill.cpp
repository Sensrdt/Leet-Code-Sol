class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if (image[sr][sc] == newColor){
            return image;
        }
        
        dfs(image, sr, sc, newColor, image[sr][sc]);
        
        return image;
        
    }
    
    void dfs(vector<vector<int>>& image, int i, int j, int colour, int old){
        int n = image.size();
        int m = image[0].size();
        
        if (i < 0 || j >= m || i >= n || j < 0){
            return ;
        }
        
        if (image[i][j] != old){
            return;
        }
        
        
        image[i][j] = colour;
        
        dfs(image, i+1, j, colour, old);
        dfs(image, i-1, j, colour, old);
        dfs(image, i, j-1, colour, old);
        dfs(image, i, j+1, colour, old);
               
    }
};