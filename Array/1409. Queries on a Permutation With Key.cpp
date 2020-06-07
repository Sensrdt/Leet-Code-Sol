class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        /*
            queries[3, 1, 2, 1]
        */
        int n = queries.size();
        vector<int> mvec;
        for (int i=1; i<=m; i++){
            mvec.push_back(i);
        }
        
        vector<int> position;
        
        for (auto a : queries){
            int pos = find(mvec.begin(), mvec.end(), a)-mvec.begin();
            position.push_back(pos);
            swapToFirst(pos, mvec);
        }
        
        return position;
    }
    
    void swapToFirst(int pos, vector<int>& P){
        int temp = P[pos];        
        for (int i=pos; i>0; i--){
            P[i]=P[i-1];
        }
        // 1 2 3 4 5
        // 3 1 2
        P[0] = temp;
    }
    
};