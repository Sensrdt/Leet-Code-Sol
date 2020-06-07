class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        int odds_cnt = 0;
        
        vector<vector<int>> ret(n);
        
        for(int i=0;i<n;++i)   ret[i].resize(m);
        
        for(auto& i:indices)
        {
            for(int j=0;j<m;++j)
                ret[i[0]][j] +=1;
            for(int k=0;k<n;++k)
                ret[k][i[1]] +=1;
        }
        
        for(auto& i:ret)
            for(auto &j: i)
                if(j%2) ++odds_cnt;
        return odds_cnt;
    }
};