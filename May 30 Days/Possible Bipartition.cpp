class Solution {
public:
    
    // 2 clique problem GFG
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(N+1);
        
        for (int i=0; i<dislikes.size(); i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        vector<int> colour(N+1, -1);
        
        for (int i=1; i<=N; i++){
            if (colour[i] == -1){
                if (bipartite(adj, i, colour) == false){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool bipartite(vector<vector<int>>& adj, int c, vector<int>& colour){
        colour[c] = 1;
        queue<int> q;
        q.push(c);
        while(q.empty() == false){
            int x = q.front();
            q.pop();
            
            for (auto a : adj[x]){
                if (colour[x] == colour[a]){
                    return false;
                }
                if (colour[a] == -1){
                    colour[a] = 1 - colour[x];
                    q.push(a);
                }
            }
        }
        
        return true;
    }
    
};