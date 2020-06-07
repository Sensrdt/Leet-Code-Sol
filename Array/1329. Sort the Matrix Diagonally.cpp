class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        
        int i = 0;
        for (int j=0; j<c; j++){
            int ti = 0;
            int tj = j;
            
            vector<int> temp;
            while(ti < r and tj < c){
                temp.push_back(mat[ti][tj]);
                ti++;
                tj++;
            }
            sort(temp.begin(), temp.end());
            ti = 0;
            tj = j;
            int count = 0;
            while(ti < r and tj < c){
                mat[ti][tj] = temp[count];
                ti++;
                tj++;
                count++;
            }
        }
        
        for (int j=1; j<r; j++){
            int ti = j;
            int tj = 0;
            
            vector<int> temp;
            
            while(ti < r and tj < c){
                temp.push_back(mat[ti][tj]);
                tj++;
                ti++;
            }
            sort(temp.begin(), temp.end());
            ti = j;
            tj = 0;
            int count = 0;
            while(ti < r and tj < c){
                mat[ti][tj] = temp[count];
                ti++;
                tj++;
                count++;
            }
        }
        
        return mat;
    }
};